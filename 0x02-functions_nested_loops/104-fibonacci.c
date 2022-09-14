#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: 0 Alwsys (Success)
 */
int main(void)
{
	int res;
	int n1 = 0;
	int n2 = 1;
	int count;

	for (count = 1; count <= 98; count++)
	{
		res = n1 + n2;
		printf("%d, ",res);
		n1 = n2;
		n2 = res;
	}
	printf("\n");
	return (0);
}
