#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches an integer
 * @array: pointer
 * @size: number of elements in array
 * @cmp: pointer to function used to compare values
 * Return: first element index on success or return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);

	}
	return (-1);
}
