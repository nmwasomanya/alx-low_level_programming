#include <stdio.h>
#include "dog.h"

int main()
{
    struct dog dog1 = { "Max", 3.5, "John" };
    struct dog dog2 = { "Bella", 0.0, NULL };
    struct dog dog3 = { NULL, 2.1, "Emily" };

    printf("Dog 1:\n");
    print_dog(&dog1);
    printf("\n");

    printf("Dog 2:\n");
    print_dog(&dog2);
    printf("\n");

    printf("Dog 3:\n");
    print_dog(&dog3);
    printf("\n");

    return 0;
}

