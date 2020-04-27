
#include "raylib.h"


#if defined(PLATFORM_WEB)
    #include <emscripten/emscripten.h>
#endif


#define SCREEN_WIDTH   800
#define SCREEN_HEIGHT  600


void update_and_render_frame() {
	// @note: Update
        
    // @note: Draw
    BeginDrawing();
    {
        ClearBackground(RAYWHITE);
        DrawText("Hello Sailor!", 190, 200, 20, GREEN);
    }
    EndDrawing();
}

int main() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "raylib_playground");
	
#if defined(PLATFORM_WEB)
	emscripten_set_main_loop(update_and_render_frame, 0, 1);
#else
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
		update_and_render_frame();
    }
#endif
	
    CloseWindow(); // Close window and OpenGL context
    
    return 0;
}
