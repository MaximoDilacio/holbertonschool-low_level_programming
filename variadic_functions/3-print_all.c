#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that print all
 * @format: list of types of arguments passed
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *sep = "";

	va_start(args,format);

	while (format && format[i])
	{
		printf("%s", sep);
		sep = ", ";
		
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str ? str : "(nill)");
				break;
			default:
				sep = "";
				break;
		}

		i++;
	}	

	printf("\n");
	va_end(args);


}
