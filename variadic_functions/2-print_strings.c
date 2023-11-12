#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: separator string
 * @n: ammout of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list l;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(l, int);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if ((i != n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(l);
}
