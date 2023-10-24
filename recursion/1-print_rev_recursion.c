#include "main.h"
/**
 * _print_rev_recursion - Prints string in reverse with recursion
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		s--;
		_putchar(*s);
	}
}
