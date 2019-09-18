#include "holberton.h"
/**
 * _islower - Checks if number is lowercase or not
 * @c: Character to print
 * Return: Returns 1 if lowercase, 0 on anything else
 *
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
