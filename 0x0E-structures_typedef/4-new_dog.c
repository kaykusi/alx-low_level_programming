#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function to output string length
 * @arr: char pointer
 * Return: integer value
 */

int _strlen(char *arr)
{
	int len = 0;

	while (arr[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - function to store char
 * @dest: char pointer
 * @src: char pointer
 * Return: char pointer
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}


/**
 * new_dog - function that creates a new struct
 * @name: char pointer
 * @age: float value
 * @owner: char pointer
 * Return: if fail return null, else return pointer to struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	doggie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}

	doggie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}

	doggie->name = _strcpy(doggie->name, name);
	doggie->age = age;
	doggie->owner = _strcpy(doggie->owner, owner);

	return (doggie);
}
