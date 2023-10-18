#include "main.h"
/**
 * puts_half - prints half of string
 * @str: string
 */
void puts_half(char *str)
{
	char *s = str;
	int i = 0;

	while (*str)
	{
		if (i % 2 == 0)
			s++;
		str++;
	}
	for (; *s; s++)
		_putchar(*s);
	_putchar(10);
}
