#include <iostream>
using namespace std;

int main()
{
    int x [2][2];
    x[0][3] = 5;
    
    cout << "Direccion de x[0][3] " << &(x[0][3]) << endl;
    cout << "Direccion de x[1][1] " << &(x[1][1]) << endl;


    int *y = (int*) &x;
    cout << '\n' << y+3 << '\t';
    cout << *(y+3) << endl;


    int **z = (int**) &x;
    cout << '\n' << (z+1)+(char *)(sizeof(int)) << endl;
    //cout << *(*(z+1)+1) << endl;
}