#include <stdio.h>
/**
 * main - print 00 to 99 with commas and spaces
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 0 ; a <= 99 ; a++)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		if (a != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
