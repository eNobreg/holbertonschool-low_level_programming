#include <stdio.h>
/**
 * main - print base16 characters
 * Return: Always 0
 */

int main(void)
{
	char a;
	char n = '\n';

	for (a = '0' ; a <= '9' ; a++)
		putchar(a);
	for (a = 'a' ; a <= 'f' ; a++)
		putchar(a);
	putchar(n);
	return (0);
}
