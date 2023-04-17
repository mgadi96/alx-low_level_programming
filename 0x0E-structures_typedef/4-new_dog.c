#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *woof;
	char *woof_name;
	char *woof_owner;

	woof = malloc(sizeof(dog_t));

	if (woof != NULL)
	{
		woof->age = age;

		if (name != NULL)
		{
			woof_name = malloc(strlen(name) + 1);
			if (woof_name == NULL)
			{
				free(woof);
				return (NULL);
			}
			woof->name = strcpy(woof_name, name);
		}
		else
			woof->name = NULL;

		if (owner != NULL)
		{
			woof_owner = malloc(strlen(owner) + 1);
			if (woof_owner == NULL)
			{
				free(woof_name);
				free(woof);
				return (NULL);
			}
			woof->owner = strcpy(woof_owner, owner);
		}
		else
			woof->owner = NULL;
	}

	return (woof);
}

