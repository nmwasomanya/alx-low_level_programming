#include <stdio.h>
#include "variadic_functions.h"


int main()
{
    /* Test case 1: Print a character*/
    printf("Test Case 1:\n");
    print_all("c", 'A');
    printf("\n\n");

    /* Test case 2: Print an integer and a string*/
    printf("Test Case 2:\n");
    print_all("is", 42, "Hello");
    printf("\n\n");

    /* Test case 3: Print a float and a character*/
    printf("Test Case 3:\n");
    print_all("fc", 3.14f, 'X');
    printf("\n\n");

    /* Test case 4: Print an empty string*/
    printf("Test Case 4:\n");
    print_all("s", "");
    printf("\n\n");

    /* Test case 5: Print a character, an integer, a string, and a float*/
    printf("Test Case 5:\n");
    print_all("cisf", 'H', 123, "World", 2.718f);
    printf("\n\n");

    return 0;
}


