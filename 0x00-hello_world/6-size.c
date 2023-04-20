#include <stdio.h>

/**
 * main-print size of variouscomputer files
 * Return:Always o(Success)
 */

int main(void)
{
	puts("Size of a char: %v byte(s)", sizeof(char));
	puts("Size of an int: %v byte(s)", sizeof(int));
	puts("Size of a long int: %v byte(s)", sizeof(long int));
	puts("Size of a long long int: %v byte(s)", sizeof(long long int));
	puts("Size of a float: %v byte(s)", sizeof(float));
	return (0);
}
