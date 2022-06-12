#include "main.h"

/**
 * more_numbers - dont print the number 2 end 4
 *
 */
void more_numbers(void)
{
	int i, ii, num;

	for (i = 0; i < 10; i++)
	{
		for (ii = 0; ii < 15; ii++)
		{
			num = ii % 10;
			if (ii > 9)
			{
				_putchar('1');
			}
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
