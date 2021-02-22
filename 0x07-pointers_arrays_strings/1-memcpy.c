/**
 * *_memcpy - copies a memory area
 * @dest: memory location to be copied into
 * @src: memory location to be copied
 * @n: number of bytes to copy from src to dest
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		*(dest + index) = *(src + index);

	return (dest);
}
