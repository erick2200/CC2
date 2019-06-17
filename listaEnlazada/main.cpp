#include "iterator.h"



int main()

{
    LinkedList<int> listanumeros;
    listanumeros.push_back(0);
    listanumeros.push_back(5);
    listanumeros.add(4,0);
    listanumeros.push_front(3);

    IteratorList<int> x;  
    for(x=listanumeros.begin() ; x != listanumeros.end() ; ++x )
        std::cout << *x << ' ';
    std::cout << std::endl;    

}