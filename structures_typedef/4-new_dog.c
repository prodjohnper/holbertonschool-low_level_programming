#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns lenght of a string
 *
 * @s: string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copies string
 * pointed to by src
 *
 * @src: string
 * @dest: pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: (Success) Pointer to new dog, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_1, len_2;

	len_1 = _strlen(name);
	len_2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (len_1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len_2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
