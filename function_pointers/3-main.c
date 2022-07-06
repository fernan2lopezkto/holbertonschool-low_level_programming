#include <stddef.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int r;

	if (argc != 4)
	{
		printf("Error");
		exit(98);

	}
	if (((*argv[2] == '/') || (*argv[2] == '%')) && *argv[3] == '0')
	{
			printf("Error\n");
			exit(100);
	}
	if ((*(get_op_func(argv[2]))) && (strlen(argv[2]) == 1))
	{
		r = (*(get_op_func(argv[2])))(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
