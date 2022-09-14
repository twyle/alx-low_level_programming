#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	unsigned long int res;
	unsigned long int n1 = 0;
	unsigned long int n2 = 1;
	int count;

	for (count = 1; count <= 50; count++)
	{
		res = n2 + n1;
		if (count != 50)
			printf("%ld, ", res);
		else
			printf("%ld\n", res);
		n1 = n2;
		n2 = res;
	}
	return (0);
}
