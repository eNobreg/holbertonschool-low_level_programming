#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The main functions randomizes a number, cuts the last digit then give
 * information on that digit.
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	printf("The last digit of %d is %d", n, lastdigit);

	if (lastdigit > 5)
		printf(" and is greater than 5\n");
	else if (lastdigit == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");
	return (0);
}
