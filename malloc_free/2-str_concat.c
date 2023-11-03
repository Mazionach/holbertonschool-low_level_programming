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
	unsigned int i, j, l = 1;

	if (s1)
		l += strlen(s1);
	if (s2)
		l += strlen(s2);
	r = malloc(strlen(s1) + strlen(s2) + 1);
	if (!r)
		return (NULL);
	if (s1)
		for (i = 0; i < strlen(s1); i++)
			r[i] = s1[i];
	if (s2)
		for (j = 0; j < strlen(s2); j++)
			r[i + j] = s2[j];
	r[i + j] = '\0';
	return (r);
}
