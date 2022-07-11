#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int m = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		m++;
		y++;
	}
	if (m % 2 == 0)
	{
		n = m / 2;
	}
	else
	{
		n = (m + 1) / 2;
	}
	for ( ; n < m ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
