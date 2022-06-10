#include "main.h"
/**
  * print_sign -test sign
  * @n: is te parameter of main.c
  * Return: void
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}

	if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	
	else
	{
		return (0);
	}
}
