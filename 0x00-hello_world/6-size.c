#include<stdio.h>
/**
 * main - print f is printing the size of a type using sizeof
 * Return: 0 always
 */
int main(void)
{
	printf("Size of a char %li byte(s)\n", sizeof(char));
	printf("Size of an int %li byte(s)\n", sizeof(int));
	printf("Size of a long int %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int %li byte(s)\n", sizeof(long long int));
	printf("Size of a float %li byte(s)\n", sizeof(float));
	return (0);
}
