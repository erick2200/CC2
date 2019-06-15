#include "color.h"
#include <iostream>

class Rojo : public Color
{
    public:
        void pintar(){std::cout << "Rojo";}
};

class Azul: public Color
{
    public:
        void pintar() {std::cout << "Azul";}
};

class Negro:public Color
{
    public:
        void pintar(){std::cout << "Negro";}
};
