#include "holberton.h"
/**
 * rot13 - Converts lowercase to uppercase
 * @str: String passed in
 * Return: Aways str
 */

char *rot13(char *str)
{
	int i, j;
	char input[80] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[80] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; input[j] != '\0'; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}
	return (str);
}
