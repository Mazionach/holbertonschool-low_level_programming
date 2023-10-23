#include "main.h"
/**
 * _strstr - searches first occurrence of substring
 * @haystack: the main string
 * @needle: the substring to look for
 * Return: first occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	int i, found = 0;

	while (*haystack)
	{
		found = 1;
		for (i = 0; haystack[i] && needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				found = 0;
				break;
			}
		}
		if (found)
			return (haystack);
		haystack++;
	}
	return (0);
}
