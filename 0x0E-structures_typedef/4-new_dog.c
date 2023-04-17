#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of thr dog
 * Return: pointer to the struct new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *run_dog;
	int i, fname, fowner;

	run_dog = malloc(sizeof(*run_dog));
	if (run_dog == NULL || !(name) || !(owner))
	{
		free(run_dog);
		return (NULL);
	}

	for (fname = 0; name[fname]; fname++)
		;

	for (fowner = 0; owner[fowner]; fowner++)
		;

	run_dog->name = malloc(fname + 1);
	run_dog->owner = malloc(fowner + 1);

	if (!(run_dog->name) || !(run_dog->owner))
	{
		free(run_dog->owner);
		free(run_dog->name);
		free(run_dog);
		return (NULL);
	}

	for (i = 0; i < fname; i++)
		run_dog->name[i] = name[i];
	run_dog->name[i] = '\0';

	run_dog->age = age;

	for (i = 0; i < fowner; i++)
		run_dog->owner[i] = owner[i];
	run_dog->owner[i] = '\0';

	return (run_dog);
}
