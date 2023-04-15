#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 * @argc: count
 * @argv: array
 * Return: 0 if successfull
 */

int main(int argc, char *argv[])
{
       	int current_num, digit, total_sum = 0;
	
	for (current_num = 1; current_num < argc; current_num++)
	{
		for (digit = 0; argv[current_num][digit]; digit++)
		{
			if (argv[current_num][digit] < '0' || argv[current_num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total_sum += atoi(argv[current_num]);
	}
	printf("%d\n", total_sum);
	return (0);
}
