#include <stdio.h>

/**
 * main - prints numbers 1 to 100 followed by a new line.
 * prints Fizz for all multiples of 3, Buzz for all multiples of 5,
 * and FizzBuzz for multiples of both 3 and 5.
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
			printf("Fizz");
		if (x % 5 == 0)
			printf("Buzz");
		else if ((x % 3 != 0) && (x % 5 != 0))
			printf("%d", x);
		if (x != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
