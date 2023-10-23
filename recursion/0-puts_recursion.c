#include "main.h"
/**
 * _puts_recursion - Prints string with recursion
 * @s: the string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
