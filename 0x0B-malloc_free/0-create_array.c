#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 *
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	char *ary;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ary = malloc(sizeof(c) *size);
	if (ary == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ary[i] = c;
	return (ary);
}
