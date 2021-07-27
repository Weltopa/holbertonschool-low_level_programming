#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - info re: dog
 * @name: Dog name.
 * @age: dog age.
 * @owner: dog owner name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
