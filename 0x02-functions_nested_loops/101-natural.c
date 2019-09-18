#include <stdio.h>
/**
 * main - includes all the code for the program
 * Return: Returns an int
 */

int main(void)
{
	int counter, sum;

	sum = 0;

	for (counter = 0; counter <= 1024; counter++)
	{
		if ((counter % 5 == 0) || (counter % 3 == 0))
			sum = sum + counter;
	}
	printf("%d\n", sum);
	return (0);

}
