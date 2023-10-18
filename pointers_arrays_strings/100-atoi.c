#include "main.h"
/**
 * _atoi - converts string to int
 * @s: the string
 * Return: an int
 */
int _atoi(char *s)
{
	int i = 0, signo = 1;

	for (;
	*s && ((*s < 58 && *s > 47) || *s == 43 || *s == 45 || *s == 32);s++)
	{
		if (*s == '+' || *s == ' ')
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
