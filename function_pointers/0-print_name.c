#include <stdio.h>
/**
 * print_name - prints name using another function
 * @name: the name
 * @f: the actual name printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
