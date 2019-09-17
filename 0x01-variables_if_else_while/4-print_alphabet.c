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
		if (a != 'q' && a != 'e')
			putchar(a);
	putchar(n);
	return (0);
}
