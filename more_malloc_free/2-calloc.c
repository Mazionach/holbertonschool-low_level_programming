#include <stdlib.h>
/**
 * _calloc - Allocates and fills memory
 * @nmemb: ammount of elements
 * @size: size of elemets
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	int i;

	if (!size || !nmemb)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (!a)
		return (NULL);

	for (i = nmemb * size; i; i--)
		a[i - 1] = 0;

	return ((void *)a);
}
