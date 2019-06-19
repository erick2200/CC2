#ifndef COLA_H
#define COLA_H

#include "node.h"
#include <iostream>

template<class T>
class Cola
{
private:
    Node<T> *head;
    int size;   
public:

    Cola();
    ~Cola();
    
    void put(T);
    T get();
    T pop();

    bool isEmpty() { return size == 0;}
    int getSize(){return size;}

};


template<class T>
Cola<T>::Cola():head(nullptr),size(0)
{
}    

template<class T>
void Cola<T>::put(T dato)
{
    Node<T>* aux =  new Node<T>(dato);
    
    if(isEmpty())
        head = aux;

    else
    {
        Node<T>* ptr = head;
        while(ptr->getSiguiente() != nullptr)
            ptr = ptr->getSiguiente();
        ptr->setSiguiente(aux);
    }
    size++;
}

template<class T>
T Cola<T>::get()
{
    if(isEmpty()) 
        std::cout << "cola vacia\n";
    else
        return *(head->getDato());
}

template<class T>
T Cola<T>::pop()
{
    if(isEmpty()) 
        std::cout << "cola vacia\n";
    else
    {
        Node<T>* eliminado = head;
        head = head->getSiguiente();
        T dato = *(eliminado->getDato());
        delete eliminado;
        size--;
        return dato;
    }
}

template<class T>
Cola<T>::~Cola()
{
    for(int i =0 ; i<size ; i++)
    {
        Node<T>* eliminado = head;
        head = head->getSiguiente();
        delete eliminado;
    }
    std::cout << "Cola liberada" << std::endl;
}

#endif