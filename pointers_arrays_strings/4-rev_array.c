#include "main.h"
/**
 * reverse_array - reverses a given array
 * @a: the array
 * @n: elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, t;

	while (i < n / 2)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
		i++;
	}
}
