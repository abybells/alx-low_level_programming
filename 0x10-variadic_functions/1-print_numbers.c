#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints out numbers given
 * @seperator: string to be seperated between numbers
 * @n: number of arguments
 * Return: nothing
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (i < (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(numbers);
	printf("\n");
}
