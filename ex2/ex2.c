#include <stdio.h>
#include <stdlib.h>

int **alloc_2d(int rows, int cols)
{
  int **intArray = malloc(rows * sizeof(int *));
  int i;
  for(i = 0; i < rows; i++) {
    intArray[i] = malloc(cols * sizeof(int));
  }
  return intArray;
}

void main(void) 
{
  int **my_array = alloc_2d(5, 10);
  my_array[2][3] = 3490;
  printf("my_array[2][3] = %d\n", my_array[2][3]);
}