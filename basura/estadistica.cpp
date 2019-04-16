#include <iostream>

using namespace std;

int main ()
{
    int N ;
    cout << " Enter N : " ;
    cin >> N ;
    int a,total = 0;
        

    cin >> total ;
    int minVal = total ;
    int maxVal = total ;

    for ( int i = 1 ; i < N ; i++ )
    {
        cin >> a ;
        total += a ;
        if ( a < minVal )
        {
            minVal = a ;
        }
        if ( a > maxVal )
        {
            maxVal = a ;
        }
    }
    
    cout<<" Mean : " << ( double ) total / N << " \n " ;
    cout<<" Max : " << maxVal << " \n " ;
    cout<<" Min : " << minVal << " \n " ;
    cout<<" Range : " << ( maxVal - minVal ) << " \n " ;
     
    return 0;
}