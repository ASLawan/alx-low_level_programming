#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog instance
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 *
 * Return: struct dog if success, null otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;
	int i, name_len = 0, owner_len = 0;

	dog_ptr = malloc(sizeof(*dog_ptr));
	if (dog_ptr == NULL || !name || !owner)
	{
		free(dog_ptr);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		name_len += 1;
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		owner_len += 1;
	}
	dog_ptr->name = malloc(name_len + 1);
	dog_ptr->owner = malloc(owner_len + 1);
	if (!(dog_ptr->name) || !(dog_ptr->owner))
	{
		free(dog_ptr->name);
		free(dog_ptr->owner);
		free(dog_ptr);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
	{
		dog_ptr->name[i] = name[i];
	}
	dog_ptr->name[i] = '\0';
	dog_ptr->age = age;
	for (i = 0; i < owner_len; i++)
	{
		dog_ptr->owner[i] = owner[i];
	}
	dog_ptr->owner[i] = '\0';
	return (dog_ptr);
}
