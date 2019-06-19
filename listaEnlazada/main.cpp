#include "pila.h"
#include "cola.h"

int main()
{
    Pila<int> pila;
    pila.push(8);
    pila.push(9);
    pila.push(0);
    while (!pila.isEmpty())
        std::cout << pila.pop() << ' ';
    std::cout << std::endl;


    Cola<int> cola;
    cola.put(8);
    cola.put(0);
    cola.put(12);
    while (!cola.isEmpty())
        std::cout << cola.pop() << ' ';        
    std::cout << std::endl;
    
}
