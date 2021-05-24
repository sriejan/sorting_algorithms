#include<time.h>
#include<stdint.h>
#include "print_array.c"
#include "Swap.c"
#include "insertion_sort.c"
#include "bubble_sort.c"
#include "selection_sort.c"
void sorting(int arr[],int m,int n)
{
	bubble_sort(arr,m,n);
	insertion_sort(arr,m,n);
	selection_sort(arr,m,n);	
}
