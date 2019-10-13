#include <stdio.h>
/**
 * main - main function
 * @argc: Count of arguments passed from cmd line
 * @argv: Values of arguments passed in
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
