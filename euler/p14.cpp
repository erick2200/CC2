#include <iostream>
using namespace std;

unsigned long long collatz(unsigned long long &n)
{
    if(n%2==0)
        n /= 2;
    else 
        n = (n*3)+1;
    return n;
}

int contiene(unsigned long long n)
{
    int acum=0;
    while(n!=1)
    {
        collatz(n);
        acum++;
    }
    return acum;
}

int main()
{
    int maximo = 1,result;
    for(int i=1; i<1000000 ;i++)
        if(maximo<contiene(i))
        {
            maximo = contiene(i);
            result = i;
        }
    cout << result << endl;
}