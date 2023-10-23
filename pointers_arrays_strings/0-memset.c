#include "main.h"
/**
 * _memset - fills memory
 * @s: buffer to fill
 * @b: fill value
 * @n: number of bytes to fill
 * Return: the modified buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (; n != 0; n--)
		s[n-1] = b;
	return (s);
}
