/**
 * is_prime - checks whether a number is a prime number recursively
 * @n: number to be checked
 * @x: divisor
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime(int n, int x)
{
	if (n == x)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (is_prime(n, x + 1));
}

/**
 * is_prime_number - check if number is prime
 * @n: number to be checked
 *
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, 2));
}
