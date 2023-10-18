#include "main.h"
/**
 * puts_half - prints half of string
 * @str: string
 */
void puts_half(char *str)
{
	char *s = str;
	int i = 0;

	for (; *str; str++)
	{
		if (i % 2 == 0)
			s++;
		i++;
	}
	for (; *s; s++)
		_putchar(*s);
	_putchar(10);
}
