#include <stdio.h>
/**
 * main - Prints sizes
 *
 * Return: Success
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n
		Size of an int: %i byte(s)\n
		Size of a long int: %i byte(s)\n
		Size of a long long int: %i byte(s)\n
		Size of a float: %i byte(s)\n",
		sizeof(char),
		sizeof(int),
		sizeof(long),
		sizeof(long long),
		sizeof(float));
	return (0);
}
