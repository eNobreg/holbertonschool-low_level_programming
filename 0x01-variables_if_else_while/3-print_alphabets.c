#include <stdio.h>
/**
 * main - print the alphabet in lowrcase
 * Return: Always 0
 */

int main(void)
{
	char a;
	char n = '\n';

	for (a = 'a' ; a <= 'z' ; a++)
		putchar(a);
	for (a = 'A' ; a <= 'Z' ; a++)
		putchar(a);
	putchar(n);
	return (0);
}
