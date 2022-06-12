#include "main.h"

/**
 * _isupper -funcion que detecta mayuscula
 * @c : is the parameters
 * Return: int
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
