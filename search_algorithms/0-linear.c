#include "search_algos.h"

/**
 * linear_search - searches array linearly
 * @array: the array
 * @size: array size
 * @value: objective
 *
 * Return: index of value, or NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
