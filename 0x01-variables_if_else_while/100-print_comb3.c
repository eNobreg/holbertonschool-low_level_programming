#include <stdio.h>
/**
 * main - print 00 to 99 with commas and spaces
 * Return: Always 0
 */

int main(void)
{
	int a, x, y;
	
	for (a = 0 ; a < 100 ; a++)
	{
		x = a % 10;
		y = a / 10;

		if (y < x)
		{
			putchar(y + '0');
			putchar(x + '0');

			if (a < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
