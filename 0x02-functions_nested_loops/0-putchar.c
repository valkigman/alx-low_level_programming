#include "main.h"

/**
 * main - prints putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char p[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
