#include "main.h"
/**
 * _memset - fills first n bytes of the memory area pointed to by s with constant byte b
 *  @s: memory area
 *  @b: constant byte
 *  @n: number of bytes to fill
 *
 *  Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
