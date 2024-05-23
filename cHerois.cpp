#include "cHerois.hpp"
#include <raylib.h>

Herois::Herois(){
    image = LoadTexture("Texturas/animations/PNG/idle/idle_1.png");
    position.x = 100;
    position.y = 100;
}
Herois::~Herois(){
    UnloadTexture(image);
}
 void Herois::Draw(){
    DrawTextureV(image,position,WHITE);
 }