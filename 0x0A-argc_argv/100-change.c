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
	int amount = atoi(argv[1]);
	int cents;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (amount < 0)
	{
		printf("%d\n", 0);
	}

	else if ((amount % 10) == 0)
	{
		cents = amount / 10;
		printf("%d\n", cents);
	}
	
	








	return (0);
}
