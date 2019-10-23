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

	func = (get_op_func(argv[2]));

	if (argc > 4)
	{
		printf("Error");
		exit(98);
	}
	if (func == NULL)
	{
		printf("Error");
		exit(99);
	}
	if (atoi(argv[1]) == 0 || atoi(argv[3]) == 0)
	{
		printf("Error");
		exit(100);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));

	return (0);



}
