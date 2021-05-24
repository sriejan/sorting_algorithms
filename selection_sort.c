#include"Selection.c"
void selection_sort(int arr[],int m,int n)
{
		
	int j,i,arr1[10000];
	struct timespec start, end;
   int64_t elapsed=0;
    for(j=1;j<=m;j++)
    {
    	for (i = 0; i < n; i++) {
    arr1[i] =arr[i];	
	}
    clock_gettime(CLOCK_MONOTONIC, &start);
    selection(arr1, n);
    clock_gettime(CLOCK_MONOTONIC, &end);
    uint64_t start_ns=(start.tv_sec*1e9)+(start.tv_nsec);
    uint64_t end_ns=(end.tv_sec*1e9)+(end.tv_nsec);
    elapsed=elapsed+end_ns-start_ns;
	}
	printf("Sorted Array after using Selection sort:\n");
    printArray(arr1, n);
    printf("Average time taken after using Selection sort %d times is %ld nanoseconds time.\n",m,elapsed/m);
}
