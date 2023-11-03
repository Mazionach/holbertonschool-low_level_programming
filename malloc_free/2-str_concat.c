#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the resulting string
 */
char *str_concat(char *s1, char *s2)
{
	char *r;
	unsigned int i, j;

	r = malloc(strlen(s1) + strlen(s2) + 1);
	if (!r)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		r[i] = s1[i];
	for (j = 0; j < strlen(s2); j++)
		r[i + j] = s2[j];
	r[i + j] = '\0';
	return (r);
}
