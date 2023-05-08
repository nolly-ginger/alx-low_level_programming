#include "main.h"

/**
 * *_memcpy - entry point to copy memory area
 * @dest: memory area 1
 * @src: memory area 2
 * @n: the size of the memory
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j;

	i = 0;
	j = n;

	for (; i < j; i++)
	{
		dest[i] = src[j];
		n--;
	}

	return (dest);
}
