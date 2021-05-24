#include<stdio.h>
 void selection(int arr[],int count)
  {
   // Logic of selection sort algorithm
   int i,j,temp;
   for(i=0;i<count;i++){
      for(j=i+1;j<count;j++){
         if(arr[i]>arr[j]){
            swap(&arr[i],&arr[j]);
         }
      }
   }
}

