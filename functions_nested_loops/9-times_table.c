#include "main.h"
/**
  * jack_bauer - test sign
  */


void times_table(void)
{
	int h, m, s;

	for (h = 0; h < 10; h++)
	{
		for (s = 0; s < 10; s++)
		{
			m = s * h;

			if (m > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				if (s != 0)
				{

					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
					_putchar(m + '0');
			}
		}
	_putchar('\n');
	}
}
