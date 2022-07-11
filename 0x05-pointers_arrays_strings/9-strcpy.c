#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies a string
 * @dest: pointer variable
 * @src: pointer variable
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int m = 0;

	while (m >= 0)
	{
		*(dest + m) = *(src + m);
		if (*(src + m) == '\0')
			break;
		m++;
	}
	return (dest);
}
