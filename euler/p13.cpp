#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main()
{
    
    ifstream archivo;
    string numero;
    int suma,acarreo=0;
    string resultado;
    for(int i=49;i>=0 ; i--)
    {
        stringstream ss;
        suma=acarreo;
        archivo.open("p13.txt",ios::in);
        while(!archivo.eof())
        {
            getline(archivo,numero);
            suma += static_cast<int>(numero[i]-48);
        }
        ss << (suma%10);
        resultado += ss.str();
        acarreo = suma/10;
        archivo.close();   
    }
    stringstream ss;
    ss << acarreo ;
    resultado += ss.str();
    
    for(int i=51;i>41 ;i--)
        cout << resultado[i] ;
    cout << endl;
}