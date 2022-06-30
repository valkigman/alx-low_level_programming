#include <stdio.h>

/**
 *main - prints the size of the various types
 *Return 0 if exited properly, non-zero if otherwise
 */
int main(void)
{
  printf("Size of int: %zu bytes\n", sizeof(int));
  printf("Size of long int: %zu bytes\n", sizeof(long int));
  printf("Size of long long int: %zu bytes\n", sizeof(long long int));
  printf("Size of float: %zu bytes\n", sizeof(float));
  printf("Size of double: %zu bytes\n", sizeof(double));
  printf("Size of char: %zu bytes\n", sizeof(char));
  return (0);
}
