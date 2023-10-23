#include "main.h"
/**
 * _strspn - returns length of prefix
 * @s: the string
 * @accept: the characters to count
 * Return: number of characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, esc = 1;

	while (*s && esc)
	{
		esc = 0;
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
			{
				esc = 1;
				n++;
			}
		s++;
	}
	return (n);
}
