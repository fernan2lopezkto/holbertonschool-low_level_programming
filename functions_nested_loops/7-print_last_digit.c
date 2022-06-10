#include "main.h"
/**
  * print_last_digit -test sign
  * @s: is th abs parameter from main
  * Return: int
  */
int print_last_digit(int s)
{
	int x = s % 10;

	if (s < 0)
	{
		x = (-x);
	}
	_putchar(x + '0');
	return (x);
}
