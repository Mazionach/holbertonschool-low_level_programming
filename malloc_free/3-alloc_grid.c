#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - allocate grid
 * @height: height
 * @width: width
 *
 * Return: the grid
 */
int **alloc_grid(int width, int height)
{
	int **r;
	int i = 0, j = 0, l = 1;


	r = malloc(sizeof(*r) * height);

	if (!r)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		r[i] = malloc(sizeof(**r) * width);
		if (!r[i])
		{
			for (j = i - 1; j >= 0; j--)
				free(r[j]);
			free(r);
			return (NULL);
		}
	}
	return (r);
}
