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
	char x;

	for (x = '0'; x <= '9'; x++)
		putchar(x);

	for (x = 'a'; x <= 'f'; x++)
	putchar(x);
	putchar('\n');
	return (0);
}
