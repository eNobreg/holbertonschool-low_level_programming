#include <stdio.h>
/**
 * main - includes all the code for the program
 * Return: Returns an int
 */

int main(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if ((counter % 5 == 0) && (counter % 3 == 0))
			printf("FizzBuzz");
		else if (counter % 3 == 0)
			printf("Fizz");
		else if (counter % 5 == 0)
			printf("Buzz");
		else
			printf("%d", counter);

		if (counter < 100)
			printf(" ");
	}
	printf("\n");
	return (0);

}
