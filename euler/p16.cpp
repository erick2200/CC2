#include <iostream>
#include <sstream>

using namespace std;

string multiplicar(string& multiplicando,int multiplicador)
{
    string producto;
    int result,acarreo=0;
    for(int i= multiplicando.size()-1 ; i>=0 ; i--)
    {
        stringstream ss;
        result = (static_cast<int>(multiplicando[i]-48))*multiplicador + acarreo;
        acarreo = result/10;
        ss << result%10;
        producto += ss.str();
    }
    if(acarreo!=0)
        {
            stringstream ss;
            ss << acarreo%10;
            producto += ss.str();
            if( acarreo >9)
            {
                stringstream ss;
                ss << acarreo/10;
                producto += ss.str();
            }
        }
    
    char aux;
    for(int i=0 ; i<producto.size()/2;i++)
    {
        aux = producto[i];
        producto[i] = producto [producto.size()-1-i];
        producto[producto.size()-1-i] = aux;
    }

    return producto;
}

int sumadigitos(string& x)
{
    unsigned int acum = 0;
    for(int i=0 ; i<x.size() ; i++)
        acum += static_cast<int>(x[i]-48);
    return acum;
}

int main()
{
    string n = "2";
    for(int i=1 ; i <1000 ; i++)
    {
         n = multiplicar(n,2);
    }
    cout << sumadigitos(n) << endl;
} 