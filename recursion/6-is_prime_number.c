#include "main.h"
int re_prim(int, int);
/**
 * is_prime_number - Checks for prime number
 * @n: the number
 * Return: the result
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (re_prim(n, 2));
	if (n < -1)
		return (re_prim(-n, 2));
	return (0);
}


/**
 * re_prim - is_prime_number recursion
 * @n: the number
 * @c: current try
 * Return: the result
 */
int re_prim(int n, int c)
{
	if (n % c == 0)
		return (0);
	if (c >= n / 2)
		return (1);
	return (re_prim(n, c + 1));
}
