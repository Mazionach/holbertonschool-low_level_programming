#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition
 * @a: int 1
 * @b: int 2
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction
 * @a: int 1
 * @b: int 2
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: int 1
 * @b: int 2
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: int 1
 * @b: int 2
 * Return: result
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo
 * @a: int 1
 * @b: int 2
 * Return: result
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
