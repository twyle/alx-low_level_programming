#include "main.h"

/**
 * more_numbers - prints 0 t0 14 ten times
 *
 * Returns: Nothing
 */
void more_numbers(void)
{
	int counter;
	char div;
	char rem;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (counter = 0; counter <= 14; counter++)
		{
			div = counter / 10;
			rem = counter % 10;
			if (div > 0)
				_putchar('0' + div);
			_putchar('0' + rem);
		}
		_putchar('\n');
	}
}
