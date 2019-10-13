#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - main function
 * @argc: Count of arguments
 * @argv: Value of arguments
 * Return: never
 */

int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) > 0 && argv[i] == )
			result += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	if (i == argc)
		printf("%d", result);

	printf("\n");
	return (0);
}
