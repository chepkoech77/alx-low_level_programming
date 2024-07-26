#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - Prints string
 * @separator: The string to be printed
 * @n: No. of strings passed to a func
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
}
