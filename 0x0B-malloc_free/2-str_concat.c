#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new space in memory or null
 */
char *str_concat(char *s1, char *s2)
{
	char *strng;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	strng = malloc(sizeof(char) * (i + j + 1));
	if (strng == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		strng[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strng[i] = s2[j];
		i++, j++;
	}
	strng[i] = '\0';
	return (strng);
}
