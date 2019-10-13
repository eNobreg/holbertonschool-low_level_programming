#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * main - Main funciton
 * @argc: Amount of arguments
 * @argv: Value is  arguments
 * Return: 1 if it is an error
 */

int main(int argc, char *argv[])
{
	int n = 0;
	int i = 0;
	int result = 0;

	if ((argc < 3 && argc >= 1) || argc > 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		n = atoi(argv[1]);
		i = atoi(argv[2]);
		result = n * i;
		printf("%d\n", result);
		return (0);
	}
}
