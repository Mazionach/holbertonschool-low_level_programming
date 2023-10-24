#include "main.h"
/**
 * _strlen_recursion - Calculates length of string
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(++s) + 1);
	return (0);
}
