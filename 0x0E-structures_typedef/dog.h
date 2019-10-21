#ifndef DOG_H
#define DOG_H
/**
 * struct dog - contains information about a dog
 * @name: Name of the dog
 * @age: Dog's age
 * @owner: Owner's name
 *
 * Return: Never
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char c);
#endif
