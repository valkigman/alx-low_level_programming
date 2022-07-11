#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int l = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[1]);
		l++;
	}
	_putchar('\n');
}
