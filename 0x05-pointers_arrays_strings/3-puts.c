#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int l = 0;

	while (l >= 0)
	{
		if (str[l] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[l]);
		l++;
	}
}
