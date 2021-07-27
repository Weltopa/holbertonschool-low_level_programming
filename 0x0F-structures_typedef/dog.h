#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - info re: dog
 * @name: Dog name.
 * @age: dog age.
 * @owner: dog owner name.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
