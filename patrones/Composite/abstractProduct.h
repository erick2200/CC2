#include <iostream>

class AbstractProduct
{
    protected:
        std::string nombre;
        float precio;
    public:
        virtual float getPrecio() = 0;
        std::string getNombre() { return nombre;}
};

