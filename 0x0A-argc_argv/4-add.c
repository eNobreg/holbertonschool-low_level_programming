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
int main(int argc __attribute__((unused)), char *argv[])
{
	int i, j;
	int result = 0;

	for (i = 1; argv[i] != 0; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{

			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		result += (atoi(argv[i]));
	}
	printf("%d", result);
	printf("\n");
	return (0);
}
