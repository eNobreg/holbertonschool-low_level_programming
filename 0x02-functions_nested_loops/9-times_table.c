#include "holberton.h"
/**
 * times_table - prints the times tables
 * Return: Never
 */
void times_table(void)
{

	int count, c2, result;

	c2 = 0;
	while (c2 < 10)
	{
		count = 0;
		while (count < 10)
		{
			result = c2 * count;

			if (result / 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
				_putchar(result + '0');

			if (count != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			count++;
		}
	c2++;
	_putchar('\n');
	}
}

