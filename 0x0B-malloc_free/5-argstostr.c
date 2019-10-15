#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - Splits a string onto mulitple lines
 * @ac: Amount of arguments passed in
 * @av: Value of arguments passed
 * Return: Null or temp
 */

char *argstostr(int ac, char **av)
{
	int cnt, cnt2, i;
	char *temp;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Getting the length of the array  */
	for (cnt = 0; cnt < ac; cnt++)
		for (cnt2 = 0; av[cnt][cnt2] != '\0'; cnt2++, i++)
			;

	/* Setting Malloc to correct size */
	temp = malloc(sizeof(char) * (ac + 1));
	if (temp == NULL)
		return (NULL);

	cnt = 0;
	i = 0;

	for (; cnt < ac; cnt++)
	{
		for (cnt2 = 0; av[cnt][cnt2] != '\0'; cnt2++, i++)
			temp[i] = av[cnt][cnt2];
		temp[i] = '\n';
		i++;
	}
	return (temp);
}
