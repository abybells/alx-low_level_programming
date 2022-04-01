#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
 * @argc: argument count
 * @argv: array of pointers to argument strings
 * Return: o
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
