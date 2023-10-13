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
	int i, largest;

	for (i = 2; i <= sqrt(1231952); i++)
		if (isprime(i))
			if (1231952 % i == 0)
				largest = i;
	printf("%i", largest);
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

	for (i = sqrt(n); i > 1; i--)
		if (n % i == 0)
			return (0);
	return (1);
}
