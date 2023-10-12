#include "main.h"
/**
 * _islower - Check if lowercase
 *
 * @c: The char to check
 *
 * Return: true if lowercase, false otherwise
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}
