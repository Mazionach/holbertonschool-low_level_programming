#include "main.h"
/**
 * _atoi - converts string to int
 * @s: the string
 * Return: an int
 */
int _atoi(char *s)
{
	int i = 0, signo = 1;

	for (; *s || *s > '9' || *s < '0'; s++)
	{
		if (*s == '+')
			continue;
		if (*s == '-')
		{
			signo = -signo;
			continue;
		}
		i = i * 10;
		i = i + *s - 48;
	}
	return (i * signo);
}
