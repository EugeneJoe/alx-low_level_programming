/**
 * *_memset - fills area around a specified memory location with a constant byte
 * @s: pointer to area in memory to be filled
 * @b: character to fill the memory area with
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		*(s + index) = b;

	return (s);
}
