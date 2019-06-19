#include <iostream>
using namespace std;


int* crear()
{
    static int x = 5;
    return &x;
}

int main()
{
    int *y = crear();
    cout << *y << endl;
    cout << y << endl;

}