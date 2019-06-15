#include "figura.h"
#include "color.h"
#include <iostream>

class Cuadrado : public Figura
{
    public:
        Cuadrado(Color *c):Figura(c){}
        void draw()
        {
            std::cout << "Cuadrado de color ";
            color->pintar();
            std::cout << std::endl; 
        }
};

class Circulo : public Figura
{
    public:
        Circulo(Color *c):Figura(c){}
        void draw()
        {
            std::cout << "Circulo de color "; 
            color->pintar();
            std::cout << std::endl; 
        }
};
