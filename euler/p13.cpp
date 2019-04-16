#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    
    ifstream archivo;
    string numero,aux;
    int suma,acareo=0;
    string resultado;
    for(int i=49;i>=0 ; i++)
    {
        suma=acareo;
        archivo.open("p13.txt",ios::in);
        while(!archivo.eof())
        {
            getline(archivo,numero);
            cout << numero << endl;
            aux = numero.substr(i,1);
            suma += atoi(aux.c_str());
        }
        resultado[i+3] = to_string(int(suma%10));
        archivo.close();   

        cout << suma << endl;
    }
    
    /*
    string nose = "48469";
    string ultimo = nose.substr(2,1);
    cout << atoi(ultimo.c_str())<< endl;
    */
}