#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all arguments
 * @argc: total arguments
 * @argv: array whit arguments saved
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
