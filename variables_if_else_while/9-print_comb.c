#include <stdio.h>
/**
 * main - Print combinations
 *
 * Return: Success
 */
int main(void)
{

	char i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
