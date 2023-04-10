#ifndef MAIN_H
#define MAIN_H

int _abs(int n);
int _isdigit(int c);
int _isalpha(int c);
int _islower(int c);
int _isupper(int c);
int _atoi(char *s);
int _strcmp(char *s1, char *s2);
unsigned int _strspn(char *s, char *accept);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
char *_strchr(char *s, char c);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _putchar(char c);

#endif
