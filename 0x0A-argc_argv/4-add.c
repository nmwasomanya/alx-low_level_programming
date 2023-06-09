#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the sum of number passed to it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]) || atoi(argv[i]) < 0 )
		{
			printf("Error\n");
			return (1);
		}
		
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
