#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: buffer to copy
 * @src: source memory
 * @n: number of bytes to copy
 * Return: the modified buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (; n != 0; n--)
		dest[n - 1] = src[n - 1];
	return (dest);
}
