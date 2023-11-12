#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums numbers
 * @n: ammout of parameters
 * Return: the result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int r = 0;

	va_list l;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		r += va_arg(l, int);
	}
	va_end(l);
	return (r);
}
