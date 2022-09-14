#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0 Alwsys (Success)
 */
int main(void)
{
	unsigned long int res;
	unsigned long int n1 = 0;
	unsigned long int n2 = 1;
	int count;

	for (count = 1; count <= 98; count++)
	{
		res = n1 + n2;
		printf("%ld, ",res);
		n1 = n2;
		n2 = res;
	}
	printf("\n");
	return (0);
}
