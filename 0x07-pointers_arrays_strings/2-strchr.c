#include "main.h"

/**
 * _strchr - returns a pointer to the first occurrence of a character
 * @c: character in the string
 * @s: string 
 *
 * Return: a pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (0);
}
