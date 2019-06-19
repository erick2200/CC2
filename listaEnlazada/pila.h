#ifndef PILA_H
#define PILA_H

#include "node.h"
#include <iostream>



template<class T>
class Pila
{
private:
    Node<T> *head;
    int size;
public:
    Pila();
    ~Pila();
    
    void push(T);
    T get();
    T pop();

    bool isEmpty() {return size == 0; }
    int getSize(){return size;}
};


template<class T>
Pila<T>::Pila():head(nullptr),size(0)
{
}    

template<class T>
void Pila<T>::push(T dato)
{
    Node<T>* aux =  new Node<T>(dato);
    
    if(isEmpty())
    {
        head = aux;
    }

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
T Pila<T>::get()
{
    if(isEmpty()) 
        std::cout << "Pila vacia\n";
    else
    {
        Node<T>* ptr = head;
        while(ptr->getSiguiente()  != nullptr)
            ptr = ptr->getSiguiente();
        return *(ptr->getDato());
    }
}

template<class T>
T Pila<T>::pop()
{
    if(isEmpty()) 
        std::cout << "Pila vacia\n";
    else if(size == 1)
    {
        T dato = *(head->getDato());
        delete head;
        size--;
        return dato;
    }
    else
    {
        Node<T>* ptr = head;
        while(ptr->getSiguiente()->getSiguiente() != nullptr)
            ptr = ptr->getSiguiente();
        Node<T>* eliminado = ptr->getSiguiente();
        T dato = *(eliminado->getDato());
        ptr->setSiguiente(nullptr);
        delete eliminado;
        size--;
        return dato;
    }
}

template<class T>
Pila<T>::~Pila()
{
    for(int i =0 ; i<size ; i++)
    {
        Node<T>* eliminado = head;
        head = head->getSiguiente();
        delete eliminado;
    }
    std::cout << "Pila liberada" << std::endl;
}

#endif