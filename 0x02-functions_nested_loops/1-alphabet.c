#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	char c;
	int i = 0;

	while (i < 26)
	{
		c = alphabet[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
