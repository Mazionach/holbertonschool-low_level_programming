#include "main.h"
/**
 * string_toupper - makes all letters uppercase
 * @s: string to uppercase
 * Return: the modified string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
