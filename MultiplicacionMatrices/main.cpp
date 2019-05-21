#include <iostream>
using namespace std;

void imprimirMatriz(int**,int,int);
int** multiplicacionMatrices(int**,int,int,int**,int,int);


int main()
{
    int **matriz1, **matriz2, **matriz3;
    int rows1,columns1,rows2,columns2,numero;
    
    //Creacion de la Primera Matriz
    cout << "Ingresar el numero de Filas y Columnas de la primera matriz" << endl;
    cin >> rows1 ;
    cin >> columns1;
    matriz1 = new int*[rows1];
    for(int i=0 ; i < rows1 ; i++)
        *(matriz1+i) = new int[columns1];
    for(int i=0 ; i<rows1 ; i++)
        for(int j=0 ; j<columns1 ; j++ )
        {
            cout << "Digite un valor para [" << i << "][" << j << "]  " ;
            cin >> numero;
            *(*(matriz1+i)+j) = numero;
        }
    imprimirMatriz(matriz1,rows1,columns1);

    //Creacion de la Segunda Matriz
    cout << "Ingrese el numero de Filas y Columnas de la segunda matriz" << endl;
    cin >> rows2;
    cin >> columns2;
    matriz2 = new int*[rows2];
    for(int i=0 ; i < rows2 ; i++)
        *(matriz2+i) = new int [columns2];
    for(int i=0 ; i<rows2 ; i++)
        for(int j=0 ; j < columns2 ; j++)
        {
            cout << "Digite un valor para [" << i << "][" << j << "]  " ;
            cin >> numero;
            *(*(matriz2+i)+j) = numero;
        }
    imprimirMatriz(matriz2,rows2,columns2);

    //Multiplicaion de matrices
    matriz3 = multiplicacionMatrices(matriz1,rows1,columns1,matriz2,rows2,columns2);
    if(matriz3 != NULL)
    {
        cout << "\nMatriz resultante\n" << endl; 
        imprimirMatriz(matriz3,rows1,columns2);
    }
    else
        cout << "No se pudo multiplicar la matriz\n" << endl;

    //Liberacion de memoria Dinamica
    for(int i=0 ; i< rows1 ; i++)
        delete[] *(matriz1+i);
    if(matriz1 != NULL ) delete [] matriz1;

    for(int i=0 ; i < rows2 ; i++ )
        delete[] *(matriz2+i);
    if(matriz2 != NULL ) delete[] matriz2;

    if(matriz3 != NULL)
    {
        for(int i=0 ; i < rows1 ; i++)
            delete[] *(matriz3+i);
        if(matriz3 != NULL) delete[] matriz3;
    }
    
    return 0;
}


void imprimirMatriz(int** arr ,int rows,int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            cout << *(*(arr+i)+j) << '\t';
        cout << endl;
    }
    cout << endl;
}

int** multiplicacionMatrices(int** arr1,int rows1,int columns1,int** arr2,int rows2,int columns2)
{
    if(columns1 != rows2)
        return NULL;
    
    int** result = new int*[rows1];
    for (int i = 0; i < rows1; i++)
        *(result+i) = new int[columns2];

    int acum;
    for(int i=0 ; i<rows1 ; i++)
        for(int j=0 ; j<columns2 ; j++)
        {
            *(*(result+i)+j) = 0;
            for(int k=0 ; k<rows2 ; k++)
                *(*(result+i)+j) += *(*(arr1+i)+k) * *(*(arr2+k)+j);
        }

    return result;
}
