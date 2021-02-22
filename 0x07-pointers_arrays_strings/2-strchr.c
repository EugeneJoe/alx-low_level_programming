/**
 * *_strchr - Locates the first occurrence of a character in a string
 * @s: String to be searched
 * @c: character to be searched for in string s
 *
 * Return: pointer to first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	unsigned int index;
	char *found;

	found = 0;
	index = 0;
	while (*(s + index) != '\0')
	{
		if (*(s + index) == c)
		{
			found = s + index;
			break;
		}
		index++;
	}
	return (found);
}
