#include <stdio.h>

/**
 * main - sum of even fibonacci numbers under 4 m
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long sum = 0;
	unsigned long res;
	int count;

	for (count = 0; count < 50; count++)
	{
		res = n1 + n2;
		if (res % 2 == 0 && res < 4000000)
			sum += res;
		n1 = n2;
		n2 = res;
	}
	printf("%lu\n", sum);
	return (0);
}
