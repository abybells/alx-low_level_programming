#include "main.h"

/** print_most_numbers - print the numbers except 2 and 4. 
 * Return: no return.
 */
void print_most_numbers(void)
{
	char c;
	for (c = '0'; ch <= '9'; ch++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
