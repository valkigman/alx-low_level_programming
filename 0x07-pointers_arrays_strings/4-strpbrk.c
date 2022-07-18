#include "main.h"

/**
 * _strpbrk - locates the first occurence in the string
 * @s: source string
 * @accept: other source string
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
			return (&s[i]);
		}
	}
	return (0);
}
