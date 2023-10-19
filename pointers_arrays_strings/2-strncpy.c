#include "main.h"
/**
 * _strncpy - copies a string to a buffer
 * @dest: final string
 * @src: other string
 * @n: number of chars to concatenate
 * Return: pointer to start of buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
