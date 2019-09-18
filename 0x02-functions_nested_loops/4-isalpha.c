#include "holberton.h"
/**
 * _isalpha - Checks if number is alphabetical  or not
 * @c: character being passed in
 * Return: Returns 1 if lowercase, 0 on anything else
 *
 */

int _isalpha(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
