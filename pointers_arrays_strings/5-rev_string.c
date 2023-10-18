#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char c, *d = s;
	int a = 0, b = 0;

	while (*d)
	{
		d++;
		b++;
	}
	b--;
	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		b--;
	}
}
