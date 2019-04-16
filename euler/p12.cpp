#include <iostream>

using namespace std;

bool primo(int n)
{
    for(int i=2; i<n; i++)
        if(n%i==0)
            return false;
    return true;
}

int ntriangular(int n)
{
    return (n*(n+1))/2;
}

int ndivisiores(int n)
{
    int result=1 , i=2;
    int acum;
    bool realizar;
    while(n!=1)
    {
        acum = 0;
        if(primo(i))
        {
            realizar = false;
            while(n%i == 0)
            {  
                acum++;
                n /= i;
                realizar = true; 
            }
            if(realizar)
                result *= (acum+1); 
        }
        i++;
    }
    return result;
}

int main()
{
//    for(long long i= 1700; ndivisiores(ntriangular(i))<500 ;i++ )
  //      cout <<"n: " << i <<"\tnTriangulo: " << ntriangular(i) << "\tDivsiores: " << ndivisiores(ntriangular(i)) << endl;
    cout << ntriangular(12375) << endl;
    return 0;
}