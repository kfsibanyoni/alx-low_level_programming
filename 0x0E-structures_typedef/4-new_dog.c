#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - copies the str pointed to by src
 *
 * @dest: destination (copy)
 * @src: source (to copy)
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}


/**
 * _strlen - returns the length of a string
 *
 * @s: string to find len of
 *
 * Return: length
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; n++)
		s++;

	return (n);
}

/**
 * new_dog - creates a new dog
 *
 * @name: name of new dog
 * @age: how old are they
 * @owner: who does it belong to
 *
 * Return: function for a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name1, owner1;
	dog_t *ptr;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	name1 = _strlen(name);
	(*ptr).name = malloc(sizeof(char) * (name1 + 1));
	if ((*ptr).name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	owner1 = _strlen(owner);
	(*ptr).owner = malloc(sizeof(char) * (owner1 + 1));
	if ((*ptr).owner == NULL)
	{
		free(ptr);
		free((*ptr).name);
		return (NULL);
	}

	_strcpy(ptr->name, name);
	_strcpy(ptr->owner, owner);
	ptr->age = age;

	return (ptr);
}
