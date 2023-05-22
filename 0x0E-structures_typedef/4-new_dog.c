#include "dog.h"
#include <stdlib.h>

/**
 * length - length of the string
 * @s: the string
 *
 * Return: length of the string
 */

int length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * copyString - to copy the string of the new type
 * @buff: pointer of buffer string belonging to
 * @stri: string being copied
 *
 * Return: pointer of buff
 */

char *copyString(char *buff, char *stri)
{
	int i, j;

	j = 0;

	while (stri[j] != '\0')
		j++;

	for (i = 0; i < j; i++)
		buff[i] = stri[i];

	buff[i] = '\0';

	return (buff);
}

/**
 * *new_dog - creating function that createsa new dog
 * @name: name of dog
 * @owner: owner og dog
 * @age: age of dog
 *
 * Return: name of new god
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n, l;

	n = length(name);
	l = length(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (n + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (l + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	copyString(dog->name, name);
	copyString(dog->owner, owner);
	dog->age = age;

	return (dog);
}
