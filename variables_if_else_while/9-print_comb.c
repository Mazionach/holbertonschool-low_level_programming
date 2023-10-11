#include <stdio.h>
/**
 * main - Print combinations
 *
 * Return: Success
 */
int main(void)
{

	int i;

	putchar('0');
	for (i = 49; i <= 57; i++)
	{
		putchar(',');
		putchar(' ');
		putchar(i);
	}
	return (0);
}
