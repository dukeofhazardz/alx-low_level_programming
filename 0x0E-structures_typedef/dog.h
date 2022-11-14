#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Author: Daniel John
 * Desc: Header file that defines a new type struct dog.
 */

/**
 * struct dog - A new type describing a dog.
 * @name: name of dog
 * @age: age of dog
 *
 */

struct dog
{
	char *name;
	float age;
	/**
	 * @owner: owner of dog
	 *
	 * Description: the dog's owner.
	 */
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
