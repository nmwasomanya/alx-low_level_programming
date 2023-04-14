#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * print_rev - to reverse a string
 *
 * @str: string input
 */

void print_rev(char *str)
{
    int len = strlen(str);
    int i = len - 1;
    while (str[i] != str[0])
    {
        printf("%c", str[i]);
        --i;
    }
    printf("%c", str[0]);
}
