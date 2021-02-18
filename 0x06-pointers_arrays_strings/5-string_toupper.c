/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string whose letters are to be changed
 *
 * Return: pointer to resulting string
 */
char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if (*(s + count) >= 'a' && *(s + count) <= 'z')
			*(s + count) -= 32;
		count++;
	}

	return (s);
}
