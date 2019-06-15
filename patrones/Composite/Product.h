#include "abstractProduct.h"

class Product : public AbstractProduct
{
    public:
        Product(std::string nombre, float precio) ;
        float getPrecio();
};

Product::Product(std::string nombre,float precio)
{
    this->nombre = nombre;
    this->precio = precio;
}

float Product::getPrecio() {return precio;}