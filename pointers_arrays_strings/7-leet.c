#include "main.h"
/**
 * leet - encodes a string in 1337
 * @s: string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	int j, i = 0;
	char chr[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
			if (s[i] == chr[j])
				s[i] = num[j];
		i++;
	}
	return (s);
}
