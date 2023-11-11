#include <stdio.h>
/**
 * array_iterator - executes function on array
 * @array: the array
 * @size: the array size
 * @action: the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
		for (i = 0; i < size; i++)
			action(array[i]);
}
