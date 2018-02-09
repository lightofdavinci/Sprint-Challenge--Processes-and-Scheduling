#include <stdlib.h>
#include <stdio.h>

int **alloc_2d(int rows, int cols)
{
  int **array = malloc(rows * sizeof(int *));
  int i;
  for (i = 0; i < rows; i++) array[i] = malloc(cols * sizeof(int));
  return array;
}

void alloc_2d_example(void)
{
  int **my_array = alloc_2d(5, 10);
  my_array[2][3] = 3490;
  printf("my_array[2][3] = %d\n", my_array[2][3]);
}

 int main(void)
 {
   alloc_2d_example();
   return 0;
 } 