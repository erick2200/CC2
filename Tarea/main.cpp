#include "rectangle.h"
#include "triangle.h"
#include <iostream>

using namespace std;

void printAttributes ( Polygon * p ) 
{
    cout << " p ’s area is " << p->area () << ".\n" ;
    cout << " p ’s points are :\ n " ;
    const PointArray *pa = p->getPoints () ;
    for ( int i = 0; i < pa->getSize () ; ++ i ) 
        cout << "(" << pa->get(i)->getX() << " , " << pa->get(i)->getY() << ")\n" ;
}

int main()
{
    cout << " Digite los 4 putnos del rectangulo : " ;
    int llx ,lly,urx,ury ;
    cin >> llx >> lly >> urx >> ury ;
    Point ll(llx,lly ) , ur( urx , ury ) ;
    Rectangle r( ll , ur ) ;
    printAttributes(&r);
    cout << " Digite los 6 puntos del triangulo: " ;
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
    Point a(x1, y1 ),b( x2 , y2 ),c( x3 , y3 ) ;
    Triangle t(a,b,c) ;
    printAttributes (& t ) ;
    return 0;

}