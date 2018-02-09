#include <stdio.h>
#include <stdlib.h>

// Honestly, I am not sure what I need to do in this exercise
// I am confused because I can push more items then number of cols to the array
// with allocated memory. How is it better than simply declaring `int array[cols];`?

int *alloc_1d(int cols)
{
	// Using malloc
	return malloc(cols * sizeof(int));

	// My guess on how calloc works

	// int *array;
	// int i = 0;
	// for (; i < cols; i++) {
	// 	array[i] = 0;
	// }
	// return array;
}

void alloc_1d_example(void)
{
	int *my_array = alloc_1d(12);
	my_array[13] = 3490;
	printf("my_array[8] = %d\n", my_array[13]);
}

int main(void)
{
  alloc_1d_example();
  return 0;
}