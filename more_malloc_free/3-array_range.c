#include <stdlib.h>
/**
 * array_range - Creates array with range of integers
 * @min: first int
 * @max: last int
 * Return: the array
 */
int *array_range(int min, int max)
{
	int *a;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(max - min + 1);
	if (!a)
		return (NULL);

	for (; min <= max; min++)
	{
		a[i] = min;
		i++;
	}

	return (a);
}
