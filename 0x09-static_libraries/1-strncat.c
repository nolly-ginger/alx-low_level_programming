#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	return strncat(dest, src, n);
}
