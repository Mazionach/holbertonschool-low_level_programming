#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: Success
 */
int main(void)
{
	char a, b;

	for (a = 97; a != 123; a++)
		putchar(a);

	for (b = 65; b != 91; b++)
		putchar(b);
	return (0);
}
