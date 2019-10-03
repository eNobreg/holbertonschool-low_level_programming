#include "holberton.h"
/**
 * leet - Converts lowercase to uppercase
 * @str: String passed in
 * Return: Aways str
 */

char *leet(char *str)
{
	int i, j;
	char nums[50] = "43071";
	char alpha[50] = "aAeEoOtTlL";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
				str[i] = nums[j / 2];
		}
	}
	return (str);
}
