#include "holberton.h"
/**
 * string_toupper - Converts lowercase to uppercase
 * @str: String passed in
 * Return: Aways str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
