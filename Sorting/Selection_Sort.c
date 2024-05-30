#include <stdio.h>

// Selection Sort for array of length n into increasing order

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int n) {

  for (int i = 0; i < n; i++) { // Output arr and see how it changes over time 
    printf("%d",arr[i]);

    if (i == n - 1){
      printf("\n"); // print new line at end of arr
      
    }
  }
}

void selectionSort(int arr[], int n) {
  int minIdx;

  for (int i = 0; i < n - 1; i++) {
    minIdx = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIdx])
        minIdx = j;
      }

    if (minIdx != i)
      swap(&arr[minIdx], &arr[i]);
      
    printArray(arr,n);
  }
}

int main() {
  int A[6] = {5, 2, 4, 6, 1, 3}; // arr to be sorted 
  int lenA = sizeof(A)/sizeof(A[0]); // calculate length of arr

  printArray(A,lenA); // print original arr
  selectionSort(A,lenA);

  return 0;
}