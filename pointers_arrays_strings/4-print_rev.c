#include "main.h"
/**
 * print_rev - prints reversed string
 * @s: string
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}

	for (; i < 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
