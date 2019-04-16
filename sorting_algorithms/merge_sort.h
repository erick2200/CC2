

void merge(int izq[],int nIzq,int der[],int nDer,int A[])
{
    int i=0,j=0,k=0;
    while( ( i < nIzq ) && ( j < nDer ) )
    {
        if( izq[i] <= der[j])
        {
            A[k] = izq[i];
            i++;
        }
        else
        {
            A[k] = der[j];
            j++;
        }
        k++;
    }

    while(i < nIzq)
    {
        A[k] = izq[i];
        i++;k++;
    }

    while(j < nDer)
    {
        A[k] = der[j];
        j++;k++;
    }
}

void mergeSort(int A[],int n)
{
    if(n==1){return;}

    int mitad = n / 2;
    int izq[mitad];
    int der[n-mitad];

    for(int i=0;i<mitad;i++)
        izq[i] = A[i];
    for(int i=mitad;i<n;i++)
        der[i-mitad] = A[i];
    mergeSort(izq, mitad);
    mergeSort(der, n-mitad);
    merge(izq, mitad, der, n-mitad, A);
}

