


void cambio(int &a, int &b) 
{ 
    int t = a; 
    a = b; 
    b = t; 
} 
  


void quickSort(int arr[], int izq, int der) 
{ 
    int i,j,pivot;
    i=izq;
    j = der;
    pivot = arr[(der+izq)/2];
    while(i<=j)
    {
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<=j)
        {
            cambio(arr[i],arr[j]);
            i++;j--;
        }
    }

    if(j>izq)
        quickSort(arr,izq,j);
    if(i<der)
        quickSort(arr,i,der);
} 
 