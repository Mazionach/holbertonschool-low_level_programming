#include "main.h"
/**
 * _strpbrk - searches first occurrence of bytes
 * @s: the string
 * @accept: the characters to search
 * Return: first occurrence
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);
		s++;
	}
	return (s);
}
