#include "main.h"

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: source string
 * @needle: substring of interest
 *
 * Return: pointer to beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
