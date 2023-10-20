#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	int cap = 0;
	
	while (s[i])
	{
		if (cap == 0)
		{
			if (s[i] >= '0' && s[i] <= '9')
				cap = 1;
			if (s[i] >= 'A' && s[i] <= 'Z')
				cap = 1;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				cap = 1;
				s[i] = s[i] - 32;
			}
		}
		if (s[i] == ' ' ||
			s[i] == '	' ||
			s[i] == '\n' ||
			s[i] == ',' ||
			s[i] == ';' ||
			s[i] == '.' ||
			s[i] == '!' ||
			s[i] == '?' ||
			s[i] == '"' ||
			s[i] == '(' ||
			s[i] == ')' ||
			s[i] == '{' ||
			s[i] == '}')
		{
			cap = 0;
		}
		i++;
	}
	return (s);
}
