#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the minimum number of coins to make change for an amount of money..
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
	}

	return (0);
}
