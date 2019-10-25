## <u>Variadic Functions</u>

Variadic functions are functions that allow you to pass in a variable amount of arguments, unlike the normal static amount of arguments. Normally variadic functions are defined like in the following header

``c
#include <stdarg.h>. 
``

The five macros within this header are:

- va_list
- va_start
- va_arg
- va_end
- va_copy

To call a variadic function, or to tell a function that there is a variable amount of arguments being passed into the function the function declaration would look like this

``c
int func(int val1, ...)
{
	return (0);    
}
``

In this example the three dots tell the program that this is a  variadic function.

A short example of the way to use Variadic functions is to add numbers.



### Tasks for Variadic Functions

- 0-
- 1-
- 2-
- 3-
