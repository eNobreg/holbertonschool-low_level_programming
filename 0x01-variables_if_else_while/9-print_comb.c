#include <stdio.h>
/**
 * main - print the alphabet in lowrcase
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
