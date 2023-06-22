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
	char s, *str;

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
			str = va_arg(ap, char *);
			if (!str)
					printf("(nil)");
			printf("%s", str);
			j = 1;
			break;
		case 'f':
			switch (j)
			{case 1: printf(", ");}
			printf("%f", va_arg(ap, double));
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
