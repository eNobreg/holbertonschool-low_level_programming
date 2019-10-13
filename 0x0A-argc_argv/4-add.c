#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"
/**
 * main - main function
 * @argc: Count of arguments
 * @argv: Value of arguments
 * Return: never
 */
int main(int argc, char *argv[])
{
	int i, j;
	int result = 0;

	for (i = 1; argv[i] != 0; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{

			if (isdigit(argv[i][j]))
				result += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (i == argc)
		printf("%d", result);

	printf("\n");
	return (0);
}
