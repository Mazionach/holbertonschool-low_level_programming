#include "main.h"
/**
 * _strchr - searches for a character in a string
 * @s: the string
 * @c: the character to search
 * Return: ponter to the first occurrence, or null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c)
		return (0);
	return (s);
}
