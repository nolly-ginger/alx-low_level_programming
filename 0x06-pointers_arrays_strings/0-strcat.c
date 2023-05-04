#include "main.h"
#include <string.h>

/**
 * *_strcat - entry point to concatenate the two given strings
 * @src: the first string
 * @dest: the second string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	printf("%s", dest);

	return (dest);
}
