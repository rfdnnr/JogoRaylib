#pragma once
#include <raylib.h>

class Herois{
    public:
    //construtor
    Herois();
    //desrutor
    ~Herois();
    //metodos
    Draw();
    
    private:
    Texture2D image;
    Vector2 position;
};