#include <stdio.h>


void printArray(int array[], int len) {
  for (int i = 0; i < len; i++) { // Output array and see how it changes over time 
    printf("%d,",array[i]);
    if (i == len - 1){
      printf("\n"); // print new line at end of array
    }
  }
}


int main() {
  int A[6] = {31,41,59,26,51,58}; // array to be sorted 
  int lenA = *(&A+ 1) - A; // calculate length of array

  printArray(A,lenA); // print original array

  for (int i = 1; i < lenA; i++) { // start loop at second entry, incrementing
    int key = A[i]; 
    // Insert A[i] into the sorted sequence A[1... j-1]
    int j = i - 1; // get entry before key
    while (j >= 0 && A[j] > key) { // while previous entry larger than key
        A[j+1] = A[j]; // shift entries up 
        j -= 1; // look at downward entry
        A[j+1] = key;  // put key into empty entry 
    }
    printArray(A,lenA);
  }
  return 0;
}