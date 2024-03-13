#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int index, dname, downer;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
		;
	for (downer = 0; owner[downer]; downer++)
		;

	p_dog->name = malloc(dname + 1);
	p_dog->owner = malloc(downer + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (index = 0; index < dname; index++)
		p_dog->name[index] = name[index];
	p_dog->name[index] = '\0';

	p_dog->age = age;

	for (index = 0; index < downer; index++)
		p_dog->owner[index] = owner[index];
	p_dog->owner[index] = '\0';

	return (p_dog);
}
