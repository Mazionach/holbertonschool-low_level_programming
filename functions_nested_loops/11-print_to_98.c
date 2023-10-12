#include "main.h"
/**
 * print_to_98 - Prints from n to 98
 */
void print_to_98(int n)
{
	while (1)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
		else
			break;
	}
	_putchar('\n');
}
