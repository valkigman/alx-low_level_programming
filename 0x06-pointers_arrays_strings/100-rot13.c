#include "main.h"

/**
 * rot13 - encodes a string
 * @s: string
 * Return: dest
 */

char *rot13(char *s)
{
	int m = 0, i;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKKM";

	while (*(s + m) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + m) == a[i])
			{
				*(s + m) = r[i];
				break;
			}
		}
		m++;
	}
	return (s);
}
