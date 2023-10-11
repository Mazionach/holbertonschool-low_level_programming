#include <stdio.h>
/**
 * main - Print hex digits
 *
 * Return: Success
 */
int main(void)
{
	char a, b;

	for (a = '0'; a <= '9'; a++)
		putchar(a);

	for (b = 'A'; b != 'F'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
