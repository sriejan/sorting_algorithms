#include<stdio.h>
#include<stdlib.h>
#include"Sort.c"
int main()
{
	int i,j,n,m,my_array[10000];
	printf("Enter the range of array 10 to 10000: ");
	scanf("%d",&n);
	 
    	for (i = 0; i < n; i++) {
    my_array[i] = rand();	
	}
	printf("Unsorted array : \n");
	printArray(my_array,n);
    printf("\nHow many times do you want to sort the array?\n");
    scanf("%d",&m);
    sorting(my_array,m,n);






/*
    struct timespec start, end;
   int64_t elapsed=0;
    for(j=1;j<=m;j++)
    {
    	for (i = 0; i < n; i++) {
    my_array[i] = rand();	
	}
	printf("Unsorted array : \n");
    printArray(my_array,n);
    	 clock_gettime(CLOCK_MONOTONIC, &start);
    bubbleSort(my_array, n);
    clock_gettime(CLOCK_MONOTONIC, &end);
    uint64_t start_ns=(start.tv_sec*1e9)+(start.tv_nsec);
    uint64_t end_ns=(end.tv_sec*1e9)+(end.tv_nsec);
    elapsed=elapsed+end_ns-start_ns;
	}
	
    printArray(my_array, n);
    
  //  uint64_t start_ns=(start.tv_sec*1e9)+(start.tv_nsec);
    //uint64_t end_ns=(end.tv_sec*1e9)+(end.tv_nsec);
    //int64_t elapsed=end_ns-start_ns;
    printf("Average time taken after using Bubble sort %d times is %ld nanoseconds time.",m,elapsed);
 */    return 0;
}
