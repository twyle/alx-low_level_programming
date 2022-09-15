#include "main.h"

/**
 * print_diagonal - print diagonal of given length
 * @n: length of diagonal
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int row;
	int space;

	if (n > 0)
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (space = 1; space <= row - 1; space++)
				{
					_putchar(32);
				}
				_putchar(92);
				_putchar('\n');
			}
			else
			{
				_putchar(92);
				_putchar('\n');
			}
		}
	}
	else
		_putchar('\n');
}
