#include "main.h"
/**
 * _strcpy - copies string
 * @dest: destination string
 * @src: source string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = NULL;
	return (dest);
}
