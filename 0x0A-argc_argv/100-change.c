#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - main function
 * @argc: Count of arguments
 * @argv: Value of arguments
 * Return: 1 or  0 depending
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int count = 0;
	int cents, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	cents = atoi(argv[1]);

	for (i = 0; i < 5;)
	{
		if (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
		else
			i++;
	}
	printf("%d\n", count);
	return (0);
}
