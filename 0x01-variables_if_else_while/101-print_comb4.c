#include <stdio.h>
/**
 * main - print 00 to 99 with commas and spaces
 * Return: Always 0
 */

int main(void)
{
	int a, x, y, h;

	for (a = 0 ; a < 1000 ; a++)
	{
		x = a % 10;
		y = a / 10;
		h = y / 10;

		if (y < x &&  h < y)
		{
			putchar(h + '0');
			putchar(y + '0');
			putchar(x + '0');

			if (a < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
