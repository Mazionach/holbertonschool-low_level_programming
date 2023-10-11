#include <stdio.h>
/**
 * main - Print all combinations
 *
 * Return: Success
 */
int main(void)
{
	int i, j;
	
	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (!(i == 0 && j == 1))
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
		}
	}
	putchar('\n');
	return (0);
}
