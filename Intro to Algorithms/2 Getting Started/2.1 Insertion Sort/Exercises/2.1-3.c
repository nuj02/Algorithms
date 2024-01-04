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

  int v = 58;
  for (int i = 1; i < lenA; i++) { // start loop at second entry, incrementing
    if (v == A[i]) {
      printf("v = %d, i = %d",v,i);
      break;
    }
  }
  return 0;
}