#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates up to n chars
 * @s1: first string
 * @s2: second string
 * @n: chars of s2 to concat
 * Return: the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i = 0, size = 1;

	if (s1)
		size += strlen(s1);
	if (s2)
	{
		if (strlen(s2) < n)
			size += strlen(s2);
		else
			size += n;
	}

	s3 = malloc(size);
	if (!s3)
		return (NULL);

	if (s1)
		for (i = 0; s1[i]; i++)
			s3[i] = s1[i];

	if (s2)
		while (*s2 && n)
		{
			s3[i] = *s2;
			i++;
			n--;
			s2++;
		}
	s3[i] = '\0';
	return (s3);
}
