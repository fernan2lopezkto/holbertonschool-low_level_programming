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
	int x;

	for (x = '0'; x <= '9'; x++)
	putchar(x);
		if (x != 9)
		{
		putchar(',');
		putchar(' ');
		}
		putchar('\n');
	return (0);
}
