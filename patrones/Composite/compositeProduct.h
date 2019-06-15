#include <vector>
#include "Product.h"

class CompositeProduct : public AbstractProduct
{
    private:
        std::vector<AbstractProduct*> productos;
    public:
        void add(AbstractProduct* producto);
        float getPrecio();
};

void CompositeProduct::add(AbstractProduct* producto)
{
    productos.push_back(producto);
}


float CompositeProduct::getPrecio()
{
    precio =0;
    for(size_t i=0 ; i < productos.size() ; i++)
        precio+= productos[i]->getPrecio();
    return precio;
}
