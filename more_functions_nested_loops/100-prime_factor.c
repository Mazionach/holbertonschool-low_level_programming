#include <stdlib.h>
#include <stdio.h>
#include <math.h>
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
			if (1231852 % i == 0)
				largest = i;
	return (0);
}

/**
 * isprime - Check if number is prime
 *
 * @n: the number
 *
 * Returns: 1 if prime
 */
int isprime(int n)
{
	int i;

	for (i = sqrt(n); i > 1; i--)
		if (n % i == 0)
			return (1);
	return (0);
}
