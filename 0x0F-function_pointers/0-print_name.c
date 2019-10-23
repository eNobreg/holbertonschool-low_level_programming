#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: Name passed in
 * @f: Pointer array passed in
 * Return: never
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
