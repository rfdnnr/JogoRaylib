#include <iostream>
#include<raylib.h>

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1000;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "AP2 POO");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    //Carregando Texturas
    Texture2D Scarfy = LoadTexture("Texturas/scarfy.png");
    
    //--------------------------------------------------------------------------------------

    //Animando Texturas
    unsigned int NumeroDeFramesDaAnimacao = 6;
    float frameWidth = (Scarfy.width / NumeroDeFramesDaAnimacao);
    Rectangle frameRec = { 0.0f, 0.0f, frameWidth, Scarfy.height };
    Vector2 ScarfyPosicao = { screenWidth / 2.0f, screenHeight/2.0f };
    unsigned int ContadorDeFrames = 0;
    unsigned int DelayDeFrames = 5;
    unsigned int ContadorDeDelays = 0;
    bool EstaMovendo = false;

    //--------------------------------------------------------------------------------------


    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        if (IsKeyDown(KEY_RIGHT)) {
            EstaMovendo = true;
        }
        else if (IsKeyDown(KEY_LEFT)) {
            EstaMovendo = true;
        }
        else {
            EstaMovendo = false;
        }


        //----------------------------------------------------------------------------------
        ContadorDeDelays++;
        if (ContadorDeDelays > DelayDeFrames) {
            ContadorDeDelays = 0;
            if (EstaMovendo) {
                ContadorDeFrames++;
                ContadorDeFrames %= NumeroDeFramesDaAnimacao;
                frameRec.x = frameWidth * ContadorDeFrames;
            }
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawTextureRec(Scarfy, frameRec, ScarfyPosicao, WHITE);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}