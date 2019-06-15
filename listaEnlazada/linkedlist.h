#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
#include <iostream>

template<class T>
class LinkedList
{
    private:
        Node<T> *head;
        int size;
    public:

        class Iterator
        {
            private:
                Node<T>* ptr;
            public:
                Iterator(){}
                bool operator!= (Node<T>*  o)
                {
                    bool igual = ptr == o;
                    return !igual;
                }
                Iterator& operator =(Node<T>* begin) 
                {
                    ptr = begin;
                    return *this;
                }
                Iterator& operator ++ ()
                {
                    ptr = ptr->getSiguiente();
                    return *this; 
                }
                Node<T>* get() {return ptr;}
        };

        LinkedList();
        ~LinkedList();
        
        void push_front(T);
        void push_back(T);
        void add(T,int);

        T* get_front();
        T* get_back();
        T* get(int);

        void remove_front();
        void remove_back();
        void remove(int);

        int getSize(){return size;}

        void mostrar();
        Node<T>* begin() {return head;}
        Node<T>* end() ;
};


template<class T>
LinkedList<T>::LinkedList():head(nullptr),size(0)
{
}    

template<class T>
void LinkedList<T>::push_back(T dato)
{
    Node<T>* aux =  new Node<T>(dato);
    
    if(head==nullptr)
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
void LinkedList<T>::push_front(T dato)
{
    Node<T> *aux =  new Node<T>(dato);
    aux->setSiguiente(head);
    head = aux;
    size++;
}

template<class T>
void LinkedList<T>::add(T dato,int n)
{
    if(n>size) return;

    Node<T>* aux =  new Node<T>(dato); 
    
    if(head==nullptr)
        head = aux;
    else if(n==0)
    {
        aux->setSiguiente(head);
        head = aux;
    }
    else
    {
        int count = 0;
        Node<T>* puntero = head ;
        while(count < (n-1))
        {
            puntero = head->getSiguiente();
            count++;
        }
        aux->setSiguiente(puntero->getSiguiente());
        puntero->setSiguiente(aux);
    }
    size++;
}

template<class T>
T* LinkedList<T>::get_front()
{
    if(size == 0) return nullptr;
    return head->getDato();
}

template<class T>
T* LinkedList<T>::get_back()
{
    if(size == 0) return nullptr;
    Node<T> ptr = head;
    while(ptr->getSiguiente()  != nullptr)
        ptr = ptr->getSiguiente();
    return &(ptr->getDato());

}

template<class T>
T* LinkedList<T>::get(int n)
{
    if(n>=size) return nullptr;
    Node<T> ptr = head;
    int count = 0;
    while(count < n)
        ptr = ptr->getSiguiente();
    return &(ptr->getDato());

}

template<class T>
void LinkedList<T>::remove_front()
{
    if(size ==0) return ;
    Node<T>* elimnado = head;
    head = head->getSiguiente();
    delete elimnado;
    size--;
}


template<class T>
void LinkedList<T>::remove_back()
{
    if(size ==0) return ;
    if(size ==1) 
        remove_front();
    else
    {
        Node<T>* ptr = head;
        while(ptr->getSiguiente()->getSiguiente() != nullptr)
            ptr = ptr->getSiguiente();
        Node<T>* eliminado = ptr->getSiguiente();
        ptr->setSiguiente(nullptr);
        delete eliminado;
        size--;
    }
}

template <class T>
void LinkedList<T>::remove(int n)
{
    if(n >= size) return ;
    if(n == 0) 
        remove_front();
    else
    {
        Node<T>* ptr = head;
        int count = 0;
        while(count < (n-1) )
        {
            ptr = ptr->getSiguiente();
            count++;
        }
        Node<T>* eliminado = ptr->getSiguiente();
        ptr->setSiguiente(eliminado->getSiguiente());
        delete eliminado;
        size--;
    }
}

template<class T>
void LinkedList<T>::mostrar()
{
    Node<T>* ptr = head;
    for(int i =0 ; i<size ; i++)
    {
        std::cout << ptr->getDato() << ' ';
        ptr = ptr->getSiguiente();
    }
    std::cout << std::endl;
}

template<class T>
LinkedList<T>::~LinkedList()
{
    for(int i =0 ; i<size ; i++)
    {
        Node<T>* eliminado = head;
        head = head->getSiguiente();
        delete eliminado;
    }
    std::cout << "Memoria liberada" << std::endl;
}

template<class T>
Node<T>* LinkedList<T>::end()
{
    Node<T>* ptr = head;
    while(ptr->getSiguiente() != nullptr)
        ptr = ptr->getSiguiente();
    return ptr->getSiguiente();
}

#endif