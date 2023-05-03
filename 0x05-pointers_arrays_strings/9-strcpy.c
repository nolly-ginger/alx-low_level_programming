#include "main.h"

/**
 * *_strcpy - Copy string including \0 to buffer
 * @src: out initial tring
 * @dest: the buffer we will copy string to
 *
 * Return: value of dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, x;

	x = 0;

	while (src[x] != '\0')
	{
		x++;
	}

	for (i = 0; i < x; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
