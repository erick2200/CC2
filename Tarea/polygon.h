#include "pointarray.h"

class Polygon 
{
    protected:
        static int numPolygons;
        PointArray points;
    public:
        Polygon(const PointArray &pa ):points ( pa ) 
        {
            ++numPolygons ;
        }
        Polygon(const Point points[] , const int numPoints ):points (points,numPoints ) 
        {
            ++numPolygons ;
        }
        virtual double area() const=0;
        static int getNumPolygons() { return numPolygons ;}
        int getNumSides() const { return points.getSize () ;}
        const PointArray* getPoints() const { return &points ;}
        ~Polygon() { --numPolygons ;}
};


int Polygon::numPolygons = 0;

