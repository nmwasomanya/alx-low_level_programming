#!/bin/bash

echo "#ifndef MAIN_H" > main.h
echo "#define MAIN_H" >> main.h

echo "" > _putchar.c
echo "#include \"main.h\"" > _putchar.c
echo "int _putchar(char c) { return (0); }" >> _putchar.c

echo "" > 0-isupper.c
echo "#include \"main.h\"" > 0-isupper.c
echo "int _isupper(int c) { return (0); }" >> 0-isupper.c

echo "" > 0-memset.c
echo "#include \"main.h\"" > 0-memset.c
echo "char *_memset(char *s, char b, unsigned int n) { return (NULL); }" >> 0-memset.c

echo "" > 0-strcat.c
echo "#include \"main.h\"" > 0-strcat.c
echo "char *_strcat(char *dest, char *src) { return (NULL); }" >> 0-strcat.c

echo "" > 1-isdigit.c
echo "#include \"main.h\"" > 1-isdigit.c
echo "int _isdigit(int c) { return (0); }" >> 1-isdigit.c

echo "" > 1-memcpy.c
echo "#include \"main.h\"" > 1-memcpy.c
echo "char *_memcpy(char *dest, char *src, unsigned int n) { return (NULL); }" >> 1-memcpy.c

echo "" > 1-strncat.c
echo "#include \"main.h\"" > 1-strncat.c
echo "char *_strncat(char *dest, char *src, int n) { return (NULL); }" >> 1-strncat.c

echo "" > 100-atoi.c
echo "#include \"main.h\"" > 100-atoi.c
echo "int _atoi(char *s) { return (0); }" >> 100-atoi.c

echo "" > 2-strchr.c
echo "#include \"main.h\"" > 2-strchr.c
echo "char *_strchr(char *s, char c) { return (NULL); }" >> 2-strchr.c

echo "" > 2-strlen.c
echo "#include \"main.h\"" > 2-strlen.c
echo "int _strlen(char *s) { return (0); }" >> 2-strlen.c

echo "" > 2-strncpy.c
echo "#include \"main.h\"" > 2-strncpy.c
echo "char *_strncpy(char *dest, char *src, int n) { return (NULL); }" >> 2-strncpy.c

echo "" > 3-islower.c
echo "#include \"main.h\"" > 3-islower.c
echo "int _islower(int c) { return (0); }" >> 3-islower.c

echo "" > 3-puts.c
echo "#include \"main.h\"" > 3-puts.c
echo "void _puts(char *s) { }" >> 3-puts.c

echo "" > 3-strcmp.c
echo "#include \"main.h\"" > 3-strcmp.c
echo "int _strcmp(char *s1, char *s2) { return (0); }" >> 3-strcmp.c

echo "#include \"main.h\"" > 3-strspn.c
echo "" >> 3-strspn.c
echo "/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: characters to accept
 *
 * Return: number of bytes in the initial segment of `s`
 * which consist only of bytes from `accept`
 */" >> 3-strspn.c
echo "unsigned int _strspn(char *s, char *accept)" >> 3-strspn.c
echo "{" >> 3-strspn.c
echo "    unsigned int i, j;" >> 3-strspn.c
echo "" >> 3-strspn.c
echo "    for (i = 0; s[i]; i++)" >> 3-strspn.c
echo "    {" >> 3-strspn.c
echo "        for (j = 0; accept[j]; j++)" >> 3-strspn.c
echo "        {" >> 3-strspn.c
echo "            if (s[i] == accept[j])" >> 3-strspn.c
echo "                break;" >> 3-strspn.c
echo "        }" >> 3-strspn.c
echo "" >> 3-strspn.c
echo "        if (!accept[j])" >> 3-strspn.c
echo "            break;" >> 3-strspn.c
echo "    }" >> 3-strspn.c
echo "" >> 3-strspn.c
echo "    return (i);" >> 3-strspn.c
echo "}" >> 3-strspn.c
echo "3-strspn.c created successfully."

echo "Creating 4-isalpha.c..."
echo "#include \"main.h\"" > 4-isalpha.c
echo "" >> 4-isalpha.c
echo "/**
 * _isalpha - checks if a character is alphabetic
 * @c: character to check
 *
 * Return: 1 if `c` is a letter, lowercase or uppercase, 0 otherwise
 */" >> 4-isalpha.c
echo "int _isalpha(int c)" >> 4-isalpha.c
echo "{" >> 4-isalpha.c
echo "    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))" >> 4-isalpha.c
echo "        return (1);" >> 4-isalpha.c
echo "    else" >> 4-isalpha.c
echo "        return (0);" >> 4-isalpha.c
echo "}" >> 4-isalpha.c
echo "4-isalpha.c created successfully."

echo "Creating 4-strpbrk.c..."
echo "#include \"main.h\"" > 4-strpbrk.c
echo "" >> 4-strpbrk.c
echo "/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: set of bytes to search for
 *
 * Return: pointer to the byte in `s` that matches one of the bytes
 * in `accept`, or NULL if no such byte is found
 */" >> 4-strpbrk.c
echo "char *_strpbrk(char *s, char *accept)" >> 4-strpbrk.c

cat > 5-strstr.c << EOF
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	/* TODO: Implement code */
	return (0);
}
EOF

cat > 6-abs.c << EOF
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute the absolute value of
 *
 * Return: the absolute value





