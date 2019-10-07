#include "holberton.h"
/**
 * times_table - prints the times tables
 * Return: Never
 */
void print_times_table(int n)
{
	int count, c2, result;
	c2 = 0;

	if (n > 15)
	{
		c2 = 0;
		while (c2 <= n)
		{
			count = 0;
			while (count <= n && n <= 15)
			{
				result = c2 * count;

			
				if (result >= 10)
				{
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else if (result >= 100)
				{
					_putchar (((result/ 100) % 10)+ '0');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');

				}
				else if (count != 0)
				{
					_putchar(' ');
					_putchar(result + '0');
				}
				else
					_putchar(result + '0');

				if (count != n && n < 15)
				{
					_putchar(',');
					_putchar(' ');
				}

				count++;
			}

		}
	}
	else
	{
		c2++;
		_putchar('\n');
	}
}
