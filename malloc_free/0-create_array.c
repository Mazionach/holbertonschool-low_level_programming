#include <stdlib.h>
/**
 * create_array - create and initialize array
 * @c: the byte to initialize to
 * @size: the size of the memory
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *r = malloc(sizeof(char) * size);
	unsigned int i;

	if (r)
		for (i = 0; i < size; i++)
			r[i] = c;
	return (r);
}
