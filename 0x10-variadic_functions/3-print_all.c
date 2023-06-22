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
	int len = strlen(format), i = 0, j = 1;
	char s;

	va_start(ap, format);
	while (i < len)
	{
		s = format[i];
		switch (s)
		{
		case 'c':
			if (!j)
				printf(", ");
			printf("%c", va_arg(ap, int));
			j = 0;
			break;
		case 'i':
			if (!j)
				printf(", ");
			printf("%d", va_arg(ap, int));
			j = 0;
			break;
		case 's':
			if (!j)
				printf(", ");
			printf("%s", va_arg(ap, char *));
			j = 0;
			break;
		case 'f':
			if (!j)
				printf(", ");
			printf("%f", (float)va_arg(ap, double));
			j = 0;
			break;
		}
		i++;
	}
	putchar('\n');
	va_end(ap);

}
