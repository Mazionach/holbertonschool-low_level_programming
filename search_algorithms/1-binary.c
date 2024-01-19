#include "search_algos.h"



/**
 * print_array - prints array
 * @array: ar
 * @size: siz
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: %i", array[0]);
	for (i = 1; i < size; i++)
		printf(", %i", array[i]);
	printf("\n");
}
/**
 * binary_search - searches array binarily
 * @array: the array
 * @size: array size
 * @value: objective
 *
 * Return: index of value, or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t max, min, i;

	if (!size)
		return (-1);

	max = size - 1;
	min = 0;
	i = (max + min) / 2;

	while (min <= max)
	{
		print_array(array + min, max - min + 1);
		if (array[i] == value)
			return (i);

		if (array[i] > value)
			max = i - 1;
		else
			min = i + 1;

		i = (max + min) / 2;
	}
	return (-1);
}
