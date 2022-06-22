#include "main.h"

int jsqrt(int resp, int n);
/**
 * _sqrt_recursion - initial function
 * @n: is from main
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int resp = 1;

	return (jsqrt(resp, n));
}

/**
 * jsqrt - is the recursive form to calculate
 * @resp: is the answer
 * @n: is number from main
 * Return: int
 */
int jsqrt(int resp, int n)
{
	if (resp * resp > n)
		return (-1);
	if (resp * resp == n)
		return (resp);
	return (jsqrt(resp + 1, n));/*recursive*/
}
