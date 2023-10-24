#include "main.h"
/**
 * factorial - Calculates a factorial
 * @n: the factorial
 * Return: the result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n)
		return (factorial(n - 1) * n);
	return (1);
}
