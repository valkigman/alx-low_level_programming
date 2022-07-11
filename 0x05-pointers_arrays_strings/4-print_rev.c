#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int asdf;

	for (asdf = 0; s[asdf] != '\0'; asdf++)
	{
	}
	for (asdf = asdf -1; asdf >= 0; asdf--)
	{
		_putchar(s[asdf]);
	}
		_putchar('\n');
}

