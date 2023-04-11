#include "main.h"
#include <stdlib.h>

/**
 * str_concat - adds the input together
 * @s1: input one to concat
 * @s2: second input to join
 * Return: Always 0
 */

char* str_concat(char* str1, char* str2) {
    if (str1 == NULL) {
        str1 = "";
    }

    if (str2 == NULL) {
        str2 = "";
    }

    int length1 = 0;
    while (str1[length1] != '\0') {
        length1++;
    }

    int length2 = 0;
    while (str2[length2] != '\0') {
        length2++;
    }

    char* concatenated_string = (char*)malloc(sizeof(char) * (length1 + length2 + 1));

    if (concatenated_string == NULL) {
        return NULL;
    }

    int i = 0;
    while (str1[i] != '\0') {
        concatenated_string[i] = str1[i];
        i++;
    }

    int j = 0;
    while (str2[j] != '\0') {
        concatenated_string[i] = str2[j];
        i++;
        j++;
    }

    concatenated_string[i] = '\0';

    return concatenated_string;
}
