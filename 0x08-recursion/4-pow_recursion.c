/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: number to be raised
 * @y: power to raiae x to
 *
 * Return: x**y else -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
