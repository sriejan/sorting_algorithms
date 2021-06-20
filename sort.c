#include<time.h>
#include<stdint.h>
#include "print_array.c"
#include "swap.c"
#include "insertion_sort.c"
#include "bubble_sort.c"
#include "selection_sort.c"
#include "tim_sort.c"
#include "quick_sort.c"
#include "merge_sort.c"
void sorting(int arr[],int m,int n)
{
	bubble_sort(arr,m,n);
	insertion_sort(arr,m,n);
	selection_sort(arr,m,n);
	tim_sort(arr,m,n);
	quick_sort(arr,m,n);	
	merge_sort(arr,m,n);
}
