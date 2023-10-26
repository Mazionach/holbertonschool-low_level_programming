#include "main.h"
/**
 * _isalpha - Check if alphabetic
 *
 * @c: The char to check
 *
 * Return: true if letter, false otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
