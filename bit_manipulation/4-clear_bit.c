#include "main.h"

/**
 * clear_bit - clear given bit of int
 * @n: the int
 * @index: the bit
 * Return: success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = 1;

	if (index > 31)
		return (-1);

	b = b << index;

	*n = *n & (~b);

	return (1);
}
