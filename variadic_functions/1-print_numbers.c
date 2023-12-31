#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: separator string
 * @n: ammout of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list l;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(l, int));
		if ((i != n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}
