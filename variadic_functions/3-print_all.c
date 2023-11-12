#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints stuff
 * @format: the format of the stuff
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s;
	va_list l;

	va_start(l, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(l, int));
				break;
			case 'i':
				printf("%i", va_arg(l, int));
				break;
			case 'f':
				printf("%f", va_arg(l, double));
				break;
			case 's':
				s = va_arg(l, char *);
				if (s)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
			default:
				continue;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(l);
}
