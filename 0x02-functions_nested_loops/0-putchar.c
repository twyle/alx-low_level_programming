#include "main.h"

/**
 * main - Print '_putchar' to standard output
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar\n";

	while (i < 9)
	{
		c = s[i];
		_putchar(c);
		i++;
	}
	return (0);
}
