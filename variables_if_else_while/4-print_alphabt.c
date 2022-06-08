#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* here is my code */
	char x, y, z;

	y = 'e';
	z = 'q';

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != y && x != z)
		putchar(x);
	}
		putchar('\n');
	return (0);
}
