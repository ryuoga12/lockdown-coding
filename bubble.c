#include <stdio.h> 
int c=0;
void swap(int *xp, int *yp) 
{ 
    c++;
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)         
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}  
int main() 
{ 
    int n;
    print("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    print("Enter unsorted array : ");
    for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
    bubbleSort(arr, n); 
    printf("Sorted array: "); 
    printArray(arr, n);
    printf("Number of passes : %d",c); 
    return 0; 
}
