#include "main.h"
/**
 * _atoi - converts string to int
 * @s: the string
 * Return: an int
 */
int _atoi(char *s)
{
	int i = 0, signo = 1;

	for (; *s; s++)
	{
		if (*s == '+' || *s == ' ')
		{
			continue;
		}
		else if (*s == '-')
		{
			signo = -signo;
			continue;
		}
		else if (*s >= '0' && *s <= '9')
		{
			i = i * 10;
			i = i + *s - 48;
		}
		else
		{
			break;
		}

	}
	return (i * signo);
}
