#include "main.h"
/**
 * _strncpy - copies a string to a buffer
 * @dest: final string
 * @src: other string
 * @n: number of chars to copy
 * Return: pointer to start of buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (src[i] && n)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
