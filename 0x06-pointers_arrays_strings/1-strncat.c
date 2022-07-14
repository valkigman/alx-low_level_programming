#include "main.h"

/**
 * *_strncat - appends src to dest, using at most n bytes from src
 * @dest: string
 * @src: string
 * @n: variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m = 0, p = 0;

	while (*(dest + m) != '\0')
	{
		m++;
	}
	
	while (p < 1)
	{
		*(dest + m) = *(src + p);
		if (*(src + p) == '\0')
			break;
		m++;
		p++;
	}
	return (dest);
}
