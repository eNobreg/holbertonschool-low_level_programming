#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Exactly what the function says, prints to 98 from any number
 * @n: value passed into the function
 * Return: Never
 */

void print_to_98(int n)
{

		if (n < 98)
		{
			for (; n <= 98 ; n++)
				if (n != 98)
					printf("%d, ", n);
				else
					printf("%d\n", n);
		}
		else if (n > 98)
		{
			for (; n >= 98 ; n--)
				if (n != 98)
					printf("%d, ", n);
				else
					printf("%d\n", n);
		}
		else
			printf("98\n");


}
