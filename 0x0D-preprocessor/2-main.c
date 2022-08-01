#include <stdio.h>

/**
 * main - prints the name of file compiled from with a new line
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
