#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct typ - Struct operators
 *
 * @c: Char
 * @tp: The function associated
 */
typedef struct typ
{
	char *c;
	void (*tp)(va_list var);
} typ_t;
#endif
