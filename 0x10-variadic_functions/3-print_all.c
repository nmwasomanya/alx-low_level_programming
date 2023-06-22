#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
* print_all - print char, integer, float and string
* @format: format
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	/*int len = strlen(format);*/
	int i = 0, j = 0;
	char s;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		s = format[i];
		switch (s)
		{
		case 'c':
			switch (j)
			{case 1: printf(", ");}
			printf("%c", va_arg(ap, int));
			j = 1;
			break;
		case 'i':
			switch (j)
			{case 1: printf(", ");}
			printf("%d", va_arg(ap, int));
			j = 1;
			break;
		case 's':
			switch (j)
			{case 1: printf(", ");}
			printf("%s", va_arg(ap, char *));
			j = 1;
			break;
		case 'f':
			switch (j)
			{case 1: printf(", ");}
			printf("%f", (float)va_arg(ap, double));
			j = 1;
			break;
		default:
			break;
		}
		i++;
	}
	putchar('\n');
	va_end(ap);

}
