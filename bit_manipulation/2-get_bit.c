#include "main.h"

/**
 * get_bit - gets value of given bit of int
 * @n: the int
 * @index: the bit
 * Return: the value, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b = 1;

	if (index > 31)
		return (-1);

	b = b << index;

	if (n & b)
		return (1);
	else
		return (0);
}
