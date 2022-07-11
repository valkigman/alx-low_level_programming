#include "main.h"

/**
 * strlen - checks the length of a string
 *@s: string
 * Return: Length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
