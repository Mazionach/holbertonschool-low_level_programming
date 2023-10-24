#include "main.h"
int re_sqrt(int, int);
/**
 * _sqrt_recursion - Calculates a square root
 * @n: the number
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	return (re_sqrt(n, 0);
}


/**
 * re_sqrt - _sqrt_recursion recursion
 * @n: the number
 * @c: current try
 * Return: the result
 */
int re_sqrt(int n, int c)
{
	if (c < n / 2)
		return (-1);
	if (c * c == n)
		return (c);
	return (re_sqrt(n, c + 1));
}
