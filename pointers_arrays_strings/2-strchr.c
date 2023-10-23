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
		if (*s == c)
			break;
		else
			s++;
	return (s);
}
