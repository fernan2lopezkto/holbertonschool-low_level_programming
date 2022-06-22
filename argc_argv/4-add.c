#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

/**
 * main - adds whit arguments
 * @argc: total arguments
 * @argv: array whit arguments saved
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 1;/*for iteration*/
	int val1;/*for save add valor*/
	int val2 = 0;/*for save valor from argument*/

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc != 1)
	{
		while (i < argc)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);

			}
			val1 = atoi(argv[i]);
			val2 = val2 + val1;
			i++;
		}
	}
	printf("%d\n", val2);
	return (0);
}
