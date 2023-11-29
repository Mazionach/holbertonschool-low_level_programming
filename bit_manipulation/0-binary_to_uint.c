#include "main.h"

/**
 * binary_to_uint - convert binary string to uint
 * @b: the string
 * Return: the int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, r = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		r = r << 1;
		if (b[i] == '1')
			r = r | 1;
		else if (b[i] != '0')
			return (0);
		i++;
	}
	return (r);
}
