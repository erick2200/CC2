#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    unsigned long long x=2;
    for(int i=1;i<1000; i++)
    {
        x*= 2;
       cout << i << "\t" <<  x << endl;
    }
} 