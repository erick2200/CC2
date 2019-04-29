#include "point.h"

class PointArray
{
    private:
        int size;
        Point *array;
        void resize(int);
    public:
        PointArray();
        PointArray(Point[],int);
        PointArray(PointArray&);
        ~PointArray();

        void push_back(Point);
        void insert(Point, int);
        void remove(int);
        void clear();
        Point* get(int);
        const Point* get(int) const ;

};

PointArray::PointArray()
{

}

PointArray::PointArray(Point arr[],int siz)
{

}

PointArray::PointArray(PointArray &o)
{

}

PointArray::~PointArray()
{

}

void PointArray::resize(int s)
{

}

void PointArray::push_back(Point x)
{

}

void PointArray::insert(Point x, int pos)
{

}

void PointArray::remove(int pos)
{

}

void PointArray::clear()
{

}

Point* PointArray::get(int pos)
{

}

const Point* PointArray::get(int pos) const
{
    
}
