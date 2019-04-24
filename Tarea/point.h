#ifndef POINT_H
#define POINT_H

class Point
{
    private:
        int x,y ;
    public:
        Point ( int xx =0 , int yy =0) { x = xx ; y = yy ;}
        int getX() { return x ;}
        int getY() { return y ;}
        void setX (int xx ) { x = xx ;}
        void setY (int yy ) { y = yy ;}
};

#endif