#include "main.h"

/**
 * flip_bits - returns number of different bits
 * @n: int 1
 * @m; int 2
 * Return: the difference
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b = 1;
	unsigned int r = 0;

	for (; b; b = b << 1)
		if ((n ^ m) & b)
			r++;
	return (r);
}
