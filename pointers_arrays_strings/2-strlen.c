#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string
 * Return: the length
 */
int _strlen(char *s)
{
	int l = 0;

	while(*s)
	{
		l++;
		s++;
	}
	return (l);
}
