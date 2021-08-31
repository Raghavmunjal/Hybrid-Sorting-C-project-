#include "merge.h"

void merge(void **arr, int l, int m, int r,int (*cmp)(void *, void *)) 
{ 
    // original array is broken in two parts 
    // left and right array 
    int len1 = m - l + 1, len2 = r - m; 
    void *left[len1]; 
    void *right[len2]; 
    for (int i = 0; i < len1; i++) 
        left[i] = arr[l + i]; 
    for (int i = 0; i < len2; i++) 
        right[i] = arr[m + 1 + i]; 
        
    int i = 0; 
    int j = 0; 
    int k = l; 
    // after comparing, we merge those two array 
    // in larger sub array 
    while (i < len1 && j < len2) 
    { 
        if ((*cmp)(left[i],right[j]) <= 0) 
        { 
            arr[k] = left[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = right[j]; 
            j++; 
        } 
        k++; 
    } 
    // copy remaining elements of left, if any 
    while (i < len1) 
    { 
        arr[k] = left[i]; 
        k++; 
        i++; 
    } 
    // copy remaining element of right, if any 
    while (j < len2) 
    { 
        arr[k] = right[j]; 
        k++; 
        j++; 
    } 
}