#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counter
 * @argv: array
 * Return: 0 if success or 1 if fail
 */ 

int main(int argc, char *argv[])
{
	if (argc < 2 && argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int product = num1 * num2;
		printf("%d\n", product);

		return (0);
	}
}
