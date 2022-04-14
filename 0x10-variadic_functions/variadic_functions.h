#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_
#include <stdarg.h>

typedef struct format
{
	char *f;
	void (*func)(va_list vargs);
} form;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
