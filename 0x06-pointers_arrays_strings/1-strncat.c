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

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	p = 0;
	while (p < n && src[p] != '\0')
	{
		dest[m] = src[p];
		m++;
		p++;
	}
	dest[m] = '\0';
	return (dest);
}
