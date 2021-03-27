#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct dog - Dog
 *
 * @name: Name of dog
 *
 * @age: Age of dog
 *
 * @owner: Owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
