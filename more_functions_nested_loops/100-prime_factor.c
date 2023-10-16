#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int isprime(int);
/**
 * main - Prints largest prime factor
 *
 * Return: Success
 */
int main(void)
{
	long int i, largest;

	largest = 1;

	for (i = 1; i < 612852475143 / 2; i++)
		if (isprime(i))
			if (612852475143 % i == 0)
				largest = i;
	printf("%ld", largest);
	return (0);
}

/**
 * isprime - Check if number is prime
 *
 * @n: the number
 *
 * Return: 1 if prime
 */
int isprime(int n)
{
	int i;

	for (i = n / 2; i > 1; i--)
		if (n % i == 0)
			return (0);
	return (1);
}
