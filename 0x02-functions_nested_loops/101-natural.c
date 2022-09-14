#include <stdio.h>

/**
 * main - Prints sum of mutiples of 3 and 5
 *
 * Return: 0 always (success)
 */
int main(void)
{
	int sum;
	int count;

	for (count = 0; count < 1024; count++)
	{
		if ((count % 3 == 0) || (count % 5 == 0))
			sum += count;
	}
	printf("%d\n", sum);
	return (0);
}
