#include <stdio.h>

// 1) Write a function that takes an array of int values as a parameter and
// returns the average of those values.
double average_of_ints(int *array, int arraysize) {
  int i, sum = 0;
  for (i=0; i<arraysize; i++) {
    sum+=(*(array+i));
  }
  return (double) sum / arraysize;
}

// 2) Write a function that takes 2 arrays of equal size as parameters (you can choose
// the type). The function should copy the values of the first array into the second.
void copy_array(int *array1, int *array2, int arraysize) { // strcpy(array2, array1) also works
  int i;
  for (i=0; i<arraysize; i++) {
    *(array2+i) = *(array1+i);
  }
}

// 3) Write a function that takes a string as a parameter and returns its length.
// When calculating the length of a string, do not include the terminating NULL in the result.
// (You should not use any extra parameters here)
int string_length(char *str) {
  int i, sum = 0;
  while (*(str+i)) {
    sum++;
    i++;
  }
  return sum;
}

int main() {

// Test #1 (average_of_ints)
  int a;
  int array1[10];
  for (a=0; a<10; a++) {
    array1[a] = a;
  }
  printf("Test #1\n");
  printf("Average from 0-9: %lf\n\n", average_of_ints(array1, 10));

// Test #2 (copy_array)
  int array2[10];
  copy_array(array1, array2, 10);
  printf("Test #2\n");
  for (a=0; a<10; a++) {
    printf("array2[%d]: %d\n", a, array2[a]);
  }

// Test #3 (string_length)
  printf("\nTest #3\n");
  printf("'stringtest': length = %d\n", string_length("stringtest"));

  return 0;

}
