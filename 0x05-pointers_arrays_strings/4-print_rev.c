#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int asdf = 0;

	while (asdf >= 0)
	{
		if (s[asdf] == '\0')
		{
			asdf++;
		}
			break;
	}
	for (asdf--; asdf >= 0; asdf--)
	{
		_putchar(s[asdf]);
	}
		_putchar('\n');
}

