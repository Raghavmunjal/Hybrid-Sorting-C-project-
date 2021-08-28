#include "tim_sort.h"

int main()
{
    int n;
    
    printf("Enter Number of Elements : ");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Enter Elements : ");
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Elements Before Sorting : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    Sort(arr,n);
    
    printf("\nElements After Sorting : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}