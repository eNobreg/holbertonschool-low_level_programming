#include "holberton.h"

void print_alphabet_x10(void)
{
	int counter, alpha_c;

	for (counter = 0 ; counter < 10 ; counter++)
	{
		for (alpha_c = 'a'; alpha_c < 'z' ; alpha_c++)
		{
			_putchar(alpha_c);
		}

		_putchar('\n');
	}

}
