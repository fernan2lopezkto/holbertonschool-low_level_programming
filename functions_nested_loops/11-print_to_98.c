#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n: number forom
 * Return: int
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
				n++;
			}
			else
			{
				printf("%d", n);
				n++;
			}
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
				n--;
			}
			else
			{
				printf("%d", n);
				n--;
			}
		}
	}
	printf("\n");

}
