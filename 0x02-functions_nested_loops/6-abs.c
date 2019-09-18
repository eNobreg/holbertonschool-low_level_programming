#include "holberton.h"
/**
 * _abs - gives the absolute value of an integer
 * @c: variable for the value passed into the funciton
 * Return: Always 0
 */


int _abs(int c)
{
	if (c < 0)
	{
		return (c *= -1);
	}
	else
		return (c);
}
