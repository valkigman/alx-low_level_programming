#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(*p) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0, min <= max; i++, min++;)
		p[i] = min;
	return (p);
}
