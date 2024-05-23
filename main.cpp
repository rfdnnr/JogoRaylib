#include <raylib.h>
#include "cJogo.hpp"

int main(){
    int windowWidth = 400;
    int windowHeight = 400;
    
    InitWindow(windowWidth,windowHeight,"Projeto POO");
    SetTargetFPS(60);
    
    Jogo jogo;
    
    while(WindowShouldClose() == false){
    BeginDrawing();
    ClearBackground(RAYWHITE);
    jogo.Draw();
    EndDrawing();
    }
    
    CloseWindow();
    return 0;
}