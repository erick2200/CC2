#include <iostream>
using namespace std;



int main()
{
    int meses[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int acum=0 ,inicio = 2;
    for(int i= 1901 ; i <2001 ; i++)
    {
        if(i%4==0 && !(i%400==0) )
            meses[1]=29;
        else
            meses[1]=28;
        for(int j=0 ; j<12 ;j++)
        {
            if(inicio == 7)
                acum++;

            inicio += (meses[j]%7);
            
            if(inicio>7)
                inicio -= 7 ; 
        }
    }
    cout << acum << endl;
}