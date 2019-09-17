#include <stdio.h>
/**
 * main - print the alphabet in lowrcase
 * Return: Always 0
 */

int main(void)
{
	char a;
	char n = '\n';

	for (a = 'z' ; a >= 'a' ; a--)
		putchar(a);
	putchar(n);
	return (0);
}
