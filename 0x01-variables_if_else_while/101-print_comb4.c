#include <stdio.h>
/**
 * main - print 00 to 99
 * Return: Always 0
 *
 */
int main(void)
{
	int a, b, c, x, y, z, h;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = a + 1 ; b < 10 ; b++)
		{
			for (c = b + 1 ; c < 10 ; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}





