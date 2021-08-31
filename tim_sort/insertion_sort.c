#include "insertion_sort.h"

void insertionSort(void **arr, int left, int right,int (*cmp)(void *, void *)) 
{ 
    for (int i = left + 1; i <= right; i++) 
    { 
        void *temp = arr[i]; 
        int j = i - 1; 
        while (j >= left && (*cmp)(arr[j],temp)>0) 
        { 
            arr[j+1] = arr[j]; 
            j--; 
        } 
        arr[j+1] = temp; 
    } 
} 