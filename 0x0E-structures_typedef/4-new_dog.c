#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"dog.h"

/**
 * new_dog- new pointer to structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: return pointer to new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	/*allocate memory for new_dog elements */
	new_dog->name = malloc(strlen(name) + 1);
	new_dog->owner = malloc(strlen(owner) + 1);

	/* copy elements into new_dog*/
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
