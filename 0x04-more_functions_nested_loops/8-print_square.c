#include "main.h"

/**
 * print_square - Print a square with #
 * @size: The square size
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int row;
	int col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
