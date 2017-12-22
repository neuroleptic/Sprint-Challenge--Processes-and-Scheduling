#include <stdio.h>
#include <stdlib.h>

int *alloc_1d(int cols)
{
  int *intArray;
  intArray = malloc(cols * sizeof(int));
  return intArray;
}

void main(void)
{
  int *my_array = alloc_1d(12);
  my_array[8] = 3490;
  printf("my_array[8] = %d\n", my_array[8]);
}