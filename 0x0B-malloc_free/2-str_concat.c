#include "main.h"
#include <stdlib.h>

/**
 * str_concat - adds the input together
 * @s1: input one to concat
 * @s2: second input to join
 * Return: Always 0
 */

char *str_concat(char *s1, char *s2)
{
    char *result;
    int len1 = strlen(s1), len2 = strlen(s2);

    result = malloc(len1 + len2 + 1);
    if (result == NULL)
        return NULL;

    strcpy(result, s1);
    strcpy(result + len1, s2);

    return result;
}
