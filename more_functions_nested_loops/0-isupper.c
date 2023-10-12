#include "main.h"
/**
 * _isupper - Check if uppercase
 *
 * @c: Char to check
 *
 * Return: 1 if uppercase, 0 otherwise
 * */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
