
#include "raylib.h"


#define SCREEN_WIDTH   800
#define SCREEN_HEIGHT  600


int main() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "raylib_playground");
    SetTargetFPS(60);
    
    while (!WindowShouldClose()) {
        // @note: Update
        
        // @note: Draw
        BeginDrawing();
        {
            ClearBackground(RAYWHITE);
            DrawText("Hello Sailor!", 190, 200, 20, GREEN);
        }
        EndDrawing();
    }
    CloseWindow(); // Close window and OpenGL context
    
    return 0;
}
