#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicate string
 * @str: the string
 *
 * Return: the copy of string
 */
char *_strdup(char *str)
{
	char *r;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	r = malloc(strlen(str) + 1);
	if (!r)
		return (NULL);
	for (i = 0; i <= strlen(str); i++)
		r[i] = str[i];
	return (r);
}
