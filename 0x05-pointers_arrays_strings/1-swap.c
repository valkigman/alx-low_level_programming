#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: as int
 * @b: as int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
