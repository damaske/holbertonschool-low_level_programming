#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Prints any type of arguments based on a format string.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str, *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i'
			|| format[i] == 'f' || format[i] == 's')
		{
			printf("%s", separator);
			separator = ", ";
			(format[i] == 'c') ? printf("%c", va_arg(args, int)) :
				(format[i] == 'i') ? printf("%d", va_arg(args, int)) :
				(format[i] == 'f') ? printf("%f", va_arg(args, double)) :
				(str = va_arg(args, char *), printf("%s", str ? str : "(nil)"));
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
