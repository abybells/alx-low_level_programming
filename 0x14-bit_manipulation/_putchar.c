#include "main.h"
#include <unistd.h>

/**
 * _putchar - puts a char c
 * @c: char to put
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
