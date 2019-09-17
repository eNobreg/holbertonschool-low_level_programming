#include <stdio.h>
/**
 * main - print 0-9 all the base10 numbers
 * Return: Always 0
 */
int main(void)
{
	int z;
	int n = '\n';

	for (z = '0' ; z <= '9' ; z++)
		putchar(z);
	putchar(n);
	return (0);
}
