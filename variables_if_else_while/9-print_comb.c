#include <stdio.h>
/**
 * main - Print combinations
 *
 * Return: Success
 */
int main(void)
{

	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 48)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
