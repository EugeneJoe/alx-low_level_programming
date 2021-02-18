/**
 * _islower - checks whether a character is a lowercase alphabet
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase else 0
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * *cap_string - capitalizes all words of a string i.e capitalize the first
 * letter of each word in the string
 * @s: pointer to the string
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int seps[] = {44,59,46,33,63,34,40,41,123,125,32,10,9};
	int count, coun2;
	char current;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		current = *(s + count);
		if (count == 0 && _islower(current))
			*(s + count) -= 32;
		for (coun2 = 0; coun2 < 13; coun2++)
		{
			if (current == seps[coun2] && _islower(*(s + count + 1)))
				*(s + count + 1) -= 32;
		}
	}

	return (s);
}
