#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for a given amount of money.
 * @argc: argument count
 * @argv: array of pointers to argument strings
 * Return: number of coins or 1
 */
int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	coins = 0;
	if (cents > 25)
	{
		while (cents >= 25)
			cents -= 25, coins++;
	}
	if (cents > 10 && cents < 25)
	{
		while (cents >= 10)
			cents -= 10, coins++;
	}
	if (cents > 5 && cents < 10)
	{
		while (cents >= 5)
			cents -= 5, coins++;
	}
	if (cents > 2 && cents < 5)
	{
		while (cents >= 2)
			cents -= 2, coins++;
	}
	if (cents == 1 || cents == 2 || cents == 5 || cents == 10 || cents == 25)
	{
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
