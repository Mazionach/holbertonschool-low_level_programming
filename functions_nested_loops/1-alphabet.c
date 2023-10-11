#include <stdio.h>
void _putchar(char);
/**
 * print_alphabet - Prints a to z
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
