/**
 * print_name - prints a name
 * @name: pointer to dtring containing name to be printed
 * @f: pointer to a function that takes a pointer to a string as an argument,
 * and has no return value. Does the actually printing in a certain format.
 *
 * Return: no return value
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
