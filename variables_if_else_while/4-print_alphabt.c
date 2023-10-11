#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: Success
 */
int main(void)
{
	char a;

	for (a = "a"; a <= "<"; a++)
	{
		if ((a != "q") && (a != "e"))
			putchar(a);
	}
	putchar("\n");
	return (0);
}
