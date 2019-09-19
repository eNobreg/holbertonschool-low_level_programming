#include "holberton.h"

void print_diagonal(int n)
{

	int i, j;
	for(i = 1; i <= n ; i++)
	{
		for(j = 2; j <= i ; j++) 	
			_putchar(32);
		_putchar(92);
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
