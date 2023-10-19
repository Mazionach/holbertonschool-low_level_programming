#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: final string
 * @src: other string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (dest);
}
