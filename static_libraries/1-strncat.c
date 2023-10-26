#include "main.h"
/**
 * _strncat - concatenates n bytes of a string to another
 * @dest: final string
 * @src: other string
 * @n: number of chars to concatenate
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (n && *src)
	{
		dest[i] = *src;
		i++;
		src++;
		n--;
	}
	return (dest);
}
