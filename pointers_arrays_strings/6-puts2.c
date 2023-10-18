#include "main.h"
/**
 * puts2 - prints odd characters
 * @s: string
 */
void puts2(char *str)
{
	int i = 0;

	while (*str)
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar(10);
}
