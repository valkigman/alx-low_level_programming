#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0 if successful, otherwise return a non-zero
 */
int main(void)
{
	int n;
	int m;
	int l;

	n = '0';
	while (n <= '9')
	{
		m = n + 1;
		while (m <= '9')
		{
			l = m + 1;
			while (l <= '9')
			{
				putchar(n);
				putchar(m);
				putchar(l);
				if (n == '7' && m == '8' && l == '9')
				{
					l++;
				}
				else
				{
					putchar(',');
					putchar(' ');
					l++;
				}
			}
			m++;
		}
		l++;
	}
	putchar('\n');
	return (0);
}
