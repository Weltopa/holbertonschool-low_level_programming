#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print the dog
 * @d: pointer to struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
