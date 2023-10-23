#include "main.h"
void re_rev(char *s);
/**
 * _print_rev_recursion - Prints string in reverse with recursion
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	re_rev(s);
	_putchar('\n');
}
/**
 * re_rev - The recursion of _print_rev_recursion
 * @s: the string
 */
void re_rev(char *s)
{
	if (*s)
	{
		re_rev(++s);
		_putchar(*s);
	}
}
