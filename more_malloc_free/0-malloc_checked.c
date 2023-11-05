#include <stdlib.h>
/**
 * malloc_checked - Allocates memory with error check
 * @b: ammount
 * Return: pointer to memory
 *
 * Allocates memory and exits if pointer is null
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (!a)
		exit(98);
	return (a);
}
