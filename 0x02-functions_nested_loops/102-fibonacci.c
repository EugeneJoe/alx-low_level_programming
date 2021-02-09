#include <stdio.h>

/**
 * fibonacci - prints the first 50 numbers of the fibonacci sequence
 * Return: no return value
 */
void fibonacci(void)
{
	long int first, second, i, temp;

	first = 1;
	second = 2;
	for (i = 0; i < 50; i++)
	{
		if (i == 49)
		{
			printf("%li", first);
			continue;
		}
		printf("%li, ", first);
		temp = first + second;
		first = second;
		second = temp;
	}
	printf("\n");
}

/**
 * main - call function fibonnaci
 * Return: Always 0
 */
int main(void)
{
	fibonacci();

	return (0);
}
