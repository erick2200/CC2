#include <iostream>
#include "insertion_sort.h"
#include "bubble_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"
#include "radix_sort.h"

using namespace std;

void printArray(int arr[],int len);

int main()
{
    int arr[]={5,4,8,3,18,100,454,254,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size);
    printArray(arr,size);
    return 0;
}

void printArray(int arr[],int len)
{
    for(int i=0 ; i<len ; i++)
        cout << arr[i] << " ";
    cout << endl;
}
