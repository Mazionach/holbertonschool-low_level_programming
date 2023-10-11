#include <stdio.h>
/**
 * main - Print combinations
 *
 * Return: Success
 */
int main(void)
{

	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	
	return (0);
}
