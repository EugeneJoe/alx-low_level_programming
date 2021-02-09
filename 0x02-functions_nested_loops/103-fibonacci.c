#include <stdio.h>

/**
 * fibonacci2 - prints the sum of even terms of the fibonacci sequence below
 * 4000000
 * Return: no return value
 */
void fibonacci2(void)
{
	long int first, second, temp, sum;

	first = 1;
	second = 2;
	while (first <= 4000000)
	{
		if ((first <= 4000000) && (first % 2 == 0))
			sum += first;
		temp = first + second;
		first = second;
		second = temp;
	}
	printf("%li\n", sum);
}

/**
 * main - call function fibonnaci
 * Return: Always 0
 */
int main(void)
{
	fibonacci2();

	return (0);
}
