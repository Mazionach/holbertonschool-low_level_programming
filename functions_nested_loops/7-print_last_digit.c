#include "main.h"
/**
 * print_last_digit - Prints last digit of number
 *
 * @n: The number
 *
 * Return: The digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar(n % 10 + '0');
	return (n % 10);
}
