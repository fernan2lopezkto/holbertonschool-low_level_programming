#include "main.h"
/**
  * _abs -test sign
  * @m: is th abs parameter from main
  * Return: int
  */
int _abs(int m)
{
	if (m >= 0)
		return (m);

	if (m < 0)
		return (-m);

	return (0);
}
