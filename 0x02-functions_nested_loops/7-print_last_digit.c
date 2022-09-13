#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: Number whose last digit is to be printed
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int j;
	int l;

	j = n % 10;
	if (j < 0)
		j = -j;
	l = '0' + j;
	_putchar(l);
	return (j);
}
