#include "main.h"
/**
 * _strcmp - compares two strings
 * @dest: final string
 * @src: other string
 * @n: number of chars to copy
 * Return: pointer to start of buffer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
