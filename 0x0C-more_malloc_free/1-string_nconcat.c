#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to be joined to another
 * @s2: string to be joined to another
 * @n: first bytes of s2
 *
 * Return: Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strng;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	strng = malloc(sizeof(char) * (i + n + 1));
	if (strng == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		strng[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		strng[i] = s2[j];
		i++, j++;
	}
	strng[i] = '\0';
	return (strng);
}
