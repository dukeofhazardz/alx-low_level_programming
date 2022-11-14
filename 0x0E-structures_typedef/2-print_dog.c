#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - A function that prints a struct dog
 * @d: pointer containing struct my_dog address
 */

void print_dog(struct dog *d)
{
	if (d !=)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
			printf("Name: %s\n", d->name);

		printf("Age: %.1f\n", d->age);

		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
			printf("Owner: %s\n", d->owner);
	}
}
