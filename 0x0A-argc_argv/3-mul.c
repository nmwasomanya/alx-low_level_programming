#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int sum = num1 * num2;
		printf("%d\n", sum);

		return (0);
	}
}
