#include <stdio.h>

/**
 * main - print all alphabets but in reverse
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
