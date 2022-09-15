#include "main.h"

/**
 * print_trianlge - prints a triangle
 * @size: the triangles height
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int row;
	int spaces;
	int hash;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = 0; spaces < size - row; spaces++)
			{
				_putchar(32);
			}
			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
