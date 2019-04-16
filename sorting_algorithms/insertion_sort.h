

void insertionSort(int arr[],int len)
{
    int x;
    int j;
    for(int i=1 ; i<len ;i++)
    {
        x = arr[i];
        j = i-1;
        while(j>=0 && arr[j]<x)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= x;
    }
}