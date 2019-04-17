#include <iostream>
#include <sstream>

using namespace std;


string factorial(int numero)
{
    string resultado = "1";
    int result,acarreo=0;
    for(int i=1 ; i<=numero ; i++)
    {
        string aux;
        acarreo = 0;
        for(int j=resultado.size()-1 ; j>=0 ; j--)
        {
            stringstream ss;
            result = (static_cast<int>(resultado[j]-48))*i + acarreo;
            acarreo = result/10;
            ss << result%10;
            aux += ss.str();
        }
        if(acarreo!=0)
        {
            stringstream ss;
            ss << acarreo%10;
            aux += ss.str();
            if( acarreo >9)
            {
                stringstream ss;
                ss << acarreo/10;
                aux += ss.str();
            }
        }

        char swap;
        for(int i=0 ; i<aux.size()/2;i++)
        {
            swap = aux[i];
            aux[i] = aux [aux.size()-1-i];
            aux[aux.size()-1-i] = swap;
        }
        resultado = aux;
    }
    return resultado;
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
    string n = factorial(100); 
    cout << n << endl;
    cout << sumadigitos(n) << endl;
} 