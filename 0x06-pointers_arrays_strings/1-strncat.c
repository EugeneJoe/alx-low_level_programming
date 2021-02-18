/**
 * *_strncat - concatenates 2 strings
 * @dest: pointer to string that other string will be appended to
 * @src: pointer to string that will be appended to dest
 * @n: number of bytes to append to dest from src
 *
 * Return: pointer to resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int count;

	while (*(dest + dlen) != '\0')
		dlen++;
	for (count = 0; count < n && *(src + count) != '\0'; count++)
		*(dest + dlen + count) = *(src + count);
	*(dest + dlen + count) = '\0';

	return (dest);
}
