#include "main.h"
/**
 * _atoi - converts string to int
 * @s: the string
 * Return: an int
 */
int _atoi(char *s)
{
	int i = 0, signo = 1, tmp, visto = 0;

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
			tmp = *s - 48;
			i = i + tmp;
			visto = 1;
		}
		else if (visto)
		{
			break;
		}

	}
	return (i * signo);
}
