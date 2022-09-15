#include "main.h"

/**
 * print_line - Drwas stratught line in terminal
 * @n: The line length
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int counter;

	if (n > 0)
	{
		for (counter = 1; counter <= n; counter++)
		{
			_putchar('_');
		}
	} 
	_putchar('\n');
}
