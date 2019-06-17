#include "linkedlist.h"
#include "node.h"

template <class T>
class IteratorList 
{
    private:
        Node<T>* cursor;
    public:
        IteratorList();
        bool hasNext();
        IteratorList& next();

        IteratorList& operator++();
        IteratorList& operator=(Node<T>* o);
        bool operator!=(Node<T>* o); 
        T operator*();

};

template<class T>
IteratorList<T>::IteratorList():cursor(nullptr)
{
}

template<class T>
bool IteratorList<T>::hasNext() { return cursor->getSiguiente(); }

template<class T>
IteratorList<T>& IteratorList<T>::next() 
{
    cursor = cursor->getSiguiente();
    return *this;
}

template<class T>
IteratorList<T>& IteratorList<T>::operator++(){ return next();}

template<class T>
IteratorList<T>& IteratorList<T>::operator=(Node<T>* o)
{
    cursor = o;
    return *this;
}

template<class T>
bool IteratorList<T>::operator!=(Node<T> *o)
{
    return cursor!=o;
}

template<class T>
T IteratorList<T>::operator*()
{
    return *(cursor->getDato());
}


