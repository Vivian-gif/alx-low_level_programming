#include "dog.h"
#include <stdio.h>

/**
 * .
 *
 * Return: no return.
 */
void print_dog(struprint_dog - prints a struct dog.
 * @d: struct dogct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
