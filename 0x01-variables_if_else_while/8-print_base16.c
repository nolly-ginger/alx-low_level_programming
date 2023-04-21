#include <stdio.h>

/**
 * main - print all numbers in letter base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 0; ch <= 16; ch++)
	{
		putchar(ch);
	}

	putchar ('\n');

	return (0);
}
