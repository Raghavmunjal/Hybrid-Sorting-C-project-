#include "insertion_sort.h"
#include "merge.h"
#define min(a,b) (a)<(b)?(a):(b)
const int RUN = 32; 

// this function sorts array from left index to 
// right index which is of size atmost RUN 

void Sort(int arr[], int n) 
{ 
    // Sort individual subarrays of size RUN 
    for (int i = 0; i < n; i+=RUN)
    {
        insertionSort(arr, i, min((i+31), (n-1))); 
    }
    // start merging from size RUN (or 32). It will merge 
    // to form size 64, then 128, 256 and so on .... 
    for (int size = RUN; size < n; size = 2*size) 
    { 
        // pick starting point of left sub array. We 
        // are going to merge arr[left..left+size-1] 
        // and arr[left+size, left+2*size-1] 
        // After every merge, we increase left by 2*size 
        for (int left = 0; left < n; left += 2*size) 
        { 
            // find ending point of left sub array 
            // mid+1 is starting point of right sub array 
            int mid = left + size - 1; 
            int right = min((left + 2*size - 1), (n-1)); 
            // merge sub array arr[left.....mid] & 
            // arr[mid+1....right] 
                
            // merge function merges the sorted runs 
            merge(arr, left, mid, right); 
        } 
    } 
} 
