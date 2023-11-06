#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: name of good boy
 * @age: age of good boy
 * @owner: lucky owner
 *
 * Return: pointer to the new dog, else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int x = _strlen(name);
	int y = _strlen(owner);
	
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc((sizeof(char) * x) + 1);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	
	dog->owner = malloc((sizeof(char) * y) + 1);

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

/**
 * _strlen - returns the length of a string
 * @s: is the variable made pointer
 * Return: length of string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}

/**
 * *_strcpy - copies the string pointer src to the dest pointer
 * @dest: return value
 * @src: copied from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
