#include<stdio.h>
/**
 * main - print f is printing the size of a type using sizeof
 * Return: 0 always
 */

int main(void)
{
	printf("Size of a char %li byte(s)\n", sizeof(char));
	printf("Size of a int %li byte(s)\n", sizeof(int));
	printf("Size of long int %li byte(s)\n", sizeof(long));
	printf("Size of a long long int %li byte(s)\n", sizeof(long long));
	printf("Size of a float %li byte(s)\n", sizeof(float));
	return (0);
}
