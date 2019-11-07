#include "holberton.h"

unsigned int _atoi(const char *str);
/**
 * binary_to_uint - converts binary to unsigned ints
 * @b: Char to convert
 * Return: The number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int number = 0, decimal = 0, num;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		i++;
	}

	number = _atoi(b);
	i = 0;
	while (number != 0)
	{
		num = number % 10;
		decimal += num << i;
		number = number / 10;
		i++;
	}
	return (decimal);
}
/**
 * _atoi - converts a string to an integer
 * @str: String to convert
 * Return: The number converted
 */
unsigned int _atoi(const char *str)
{
	unsigned int result = 0, i = 0;

	for (i = 0; str[i] != '\0'; i++)
		result = result * 10 + str[i] - '0';
	return (result);

}
