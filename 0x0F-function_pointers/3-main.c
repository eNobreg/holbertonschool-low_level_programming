#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Error checking and calls
 * @argc: Amount of args
 * @argv: Val of args
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	char n = *argv[2];

	func = (get_op_func(argv[2]));

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(argv[1]) == 0 || atoi(argv[3]) == 0) && (n == '/' || n == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));

	return (0);



}
