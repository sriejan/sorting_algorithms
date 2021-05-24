#include<stdio.h>
#include<stdint.h>

void bubbleSort(int arr[], int n)
{
	int i;
    if (n == 1)
        return;

    for(i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(&arr[i], &arr[i+1]);
 
    bubbleSort(arr, n-1);
}
