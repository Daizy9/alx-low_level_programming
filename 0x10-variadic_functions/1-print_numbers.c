#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * * print_strings - prints a string
 * * @separator: seperator char
 * * @n: number of args
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;
	char *strArg;

	va_start(nums, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
