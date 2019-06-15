#include "compositeProduct.h"

using namespace std;
int main()
{
    CompositeProduct paquetes[3];
    Product *productos[12];
    
    int count=0;
    for(int i=0 ; i<3 ; i++)
        for(int j =0 ; j<4 ; j++)
        {
            productos[count] = new Product("Producto",(3.452*i)+(5.756*j));
            paquetes[i].add(productos[count]);
            count++;
        }
    
    for(int i=1 ; i<3 ;i++ )
        paquetes[0].add(&(paquetes[i]));
    
    for(int i=0 ; i<3 ; i++)
        cout << paquetes[i].getPrecio() << endl;

    for(int i=0 ; i<12 ; i++)
        delete productos[i];

}