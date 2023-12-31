#include "main.h"
/**
 * _pow_recursion - Calculates a power
 * @x: the base
 * @y: the exponent
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y)
		return (_pow_recursion(x, y - 1) * x);
	return (1);
}
