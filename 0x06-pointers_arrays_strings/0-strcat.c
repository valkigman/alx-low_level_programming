#include "main.h"

/**
 * *strcat - appends src string to dest string
 * @*dest: string
 * @*src: string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int m = 0, p = 0;

	while (*(dest + m) != '\0')
	{
		m++;
	}
	while (p >= 0)
	{
		*(dest + m) = *(src + p);
		if (*(src + p) == '\0')
			break;
		m++;
		p++;
	}
	return (dest);
}
