/**
 * int_index - searches for an indes acording to a function
 * @array: the array to search in
 * @size: the array size
 * @cmp: compare function
 * Return: the found int index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
