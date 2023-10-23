#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonal sums of a matrix
 * @a: the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
		sum += a[i + i * size];
	printf("%i, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
		sum += a[size - i - 1 + i * size];
	printf("%i\n", sum);
}
