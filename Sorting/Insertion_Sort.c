#include <stdio.h>

// Insertion Sort for array of length n into increasing order

void printArray(int arr[], int n) {

  for (int i = 0; i < n; i++) { // Output arr and see how it changes over time 
    printf("%d",arr[i]);

    if (i == n - 1){
      printf("\n"); // print new line at end of arr
      
    }
  }
}

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) { // start loop at second entry, incrementing
    int key = arr[i]; 
    int j = i - 1; // get entry before key

    while (j >= 0 && arr[j] > key) { // while previous entry larger than key
        arr[j+1] = arr[j]; // shift entries up 
        j = j - 1; // look at downward entry
    }
    arr[j+1] = key;  // sort key
    printArray(arr,n);

  }
}

int main() {
  int A[6] = {5, 2, 4, 6, 1, 3}; // arr to be sorted 
  int lenA = sizeof(A)/sizeof(A[0]); // calculate length of arr

  printArray(A,lenA); // print original arr
  insertionSort(A,lenA);

  return 0;
}