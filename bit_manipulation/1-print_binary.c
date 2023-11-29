#include "main.h"

/**
 * print_binary - prints binary representation
 * @n: the int
 */
void print_binary(unsigned long int n)
{
	unsigned long int b = 0x8000000000000000;

	while (!(n & b) && b)
		b = b >> 1;
	if (!b)
	{
		printf("0");
		return;
	}
	while (b)
	{
		if (b & n)
			printf("1");
		else
			printf("0");
		b = b >> 1;
	}
}
