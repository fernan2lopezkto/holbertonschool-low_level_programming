#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - multiplication whit arguments
 * @argc: total arguments
 * @argv: array whit arguments saved
 * Return: int
 */
int main(int argc, char *argv[])
{
	int val1, val2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	val1 = atoi(argv[1]);
	val2 = atoi(argv[2]);
	printf("%d\n", val1 * val2);
	return (0);
}
