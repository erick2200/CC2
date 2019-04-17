#include <iostream>
using namespace std;

void llenarcuadros()
{
    unsigned long long int x[21][21];
    for(int i=0 ; i<21 ; i++)
    {
        x[0][i] = 1;
        x[i][0] = 1;
    }

    for(int i=1 ; i<21 ; i++)
        for(int j=1 ; j<21 ; j++)
            x[i][j] = x[i][j-1] + x[i-1][j];

    cout << x[20][20] << endl;
}


int main()
{
    llenarcuadros();
}