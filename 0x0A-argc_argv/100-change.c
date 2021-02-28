#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins needed to make change for an
 * amount of money. Coin values are 25,10,5,2,1
 * @argc: number of arguments passed to main
 * @argv: array of pointers to strings that are the arguments to main
 *
 * Return: 0 (success) else 1 if number of arguments passed is not 1
 */
int main(int argc, char **argv)
{
	int coins, cash;

	coins = 0;
	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	cash = atoi(argv[1]);
	if (cash < 0)
	{
		printf("0\n");
		return (0);
	}
	if (cash >= 25)
	{
		coins += cash / 25;
		cash = cash % 25;
	}
	if (cash >= 10)
	{
		coins += cash / 10;
		cash = cash % 10;
	}
	if (cash >= 5)
	{
		coins += cash / 5;
		cash = cash % 5;
	}
	if (cash >= 2)
	{
		coins += cash / 2;
		cash = cash % 2;
	}
	coins += cash / 1;
	printf("%d\n", coins);
	return (0);
}
