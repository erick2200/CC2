#ifndef NODE_H
#define NODE_H

#include <iostream>

template<class T>
class Node
{
	private:
    	T dato;
		Node<T>* siguiente;
	public:
		Node(T);

		void setSiguiente(Node<T>*);
		void setDato(T);
		
		Node<T>* getSiguiente();
		T* getDato();
};

template<class T>
Node<T>::Node(T dato) :siguiente(nullptr)
{
    this->dato = dato;
}

template<class T>
void Node<T>::setSiguiente(Node<T>* sig) {siguiente = sig;}

template<class T>
void Node<T>::setDato(T dato) {this->dato = dato;}

template<class T>
Node<T>* Node<T>::getSiguiente() {return siguiente;}

template<class T>
T* Node<T>::getDato() { return &dato;}
#endif
