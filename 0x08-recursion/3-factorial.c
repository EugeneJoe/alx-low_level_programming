/**
 * factorial - returns the factorial of a number
 * @n: number whose factorial is to be found
 *
 * Return: factorial of n. If n is less than 0, return -1
 */
int factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
			return (-1);
		else
			return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
