#include "main.h"
#include <string.h>

/**
 * pali - finds if palindrome
 * @s1: string
 * @s2: string
 *
 * Return: 1 or 0
 */

int pali(char *s1, char *s2)
{
	if (*s1 != *s2)
	{
		return (0);
	}
	else if (*s1 == '\0')
	{
		return (1);
	}

	return pali(s1 + 1, s2 - 1);
}

/**
 * is_palindrome - checker
 * @s: input string
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s != s[strlen(s) - 1])
	{
		return (0);
	}

	return (pali(s + 1, s + strlen(s) - 2));
}
