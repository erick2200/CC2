#include "colores.h"
#include "figuras.h"

int main()
{
    Color* rojo = new Rojo();
    Color* azul = new Azul(); 
    Color* negro = new Negro();
    
    Figura* cuadrado1 = new Cuadrado(azul);
    Figura* cuadrado2 = new Cuadrado(rojo);
    Figura* circulo = new Circulo(negro); 

    cuadrado1->draw();
    cuadrado2->draw();
    circulo->draw();

    delete cuadrado1;
    delete cuadrado2;
    delete circulo;

    delete rojo;
    delete azul;
    delete negro;
}