#include <stdio.h>
#include <stdlib.h>
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
		if (atoi(argv[i]) > 0)
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
}
