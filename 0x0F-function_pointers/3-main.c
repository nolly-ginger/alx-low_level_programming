#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to give main operations
 * @argv: pointer of arguments
 * @argc: arguments given within the program
 *
 * Return: Always 0 (Success)
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	c = argv[2];
	num2 = atoi(argv[3]);
	if (get_op_func(c) == NULL || c[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*c == '/' || num2 == 0) || (*c == '%' || num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(c)(num1, num2));
	return (0);
}
