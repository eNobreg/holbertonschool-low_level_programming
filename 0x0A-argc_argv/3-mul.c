#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main funciton
 * @argc: Amount of arguments
 * @argv: Value is  arguments
 * Return: 1 if it is an error
 */

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	int i = atoi(argv[2]);
	int result = i * n;

	if (argc == 3)
	{
		printf("%d\n", result);
	}
	else
		return (1);
}
