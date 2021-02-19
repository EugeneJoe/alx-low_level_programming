/**
 * _strlen - finds the length of a string
 * @s: string whose length is to be found
 *
 * Return: int containing length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0, j = _strlen(s) - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}

/**
 * *infinite_add - adds two integers stored in strings
 * @n1: string containing first integer
 * @n2: string containing second integer
 * @r: string to store result
 * @size_r: size of string r
 *
 * Return: pointer r pointing to string containing result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum = 0;
	int index = 0;
	int carry = 0;
	int len1 = _strlen(n1) - 1;
	int len2 = _strlen(n2) - 1;
	int n, m, lngr;

	lngr = len1 > len2 ? len1 : len2;
	if (size_r < lngr + 3)
		return (0);
	while (len1 >= 0 || len2 >= 0)
	{
		n = 0;
		m = 0;
		if (len1 >= 0)
		{
			n = n1[len1] - '0';
			len1--;
		}
		if (len2 >= 0)
		{
			m = n2[len2] - '0';
			len2--;
		}
		sum = n + m + carry;
		r[index++] = (sum % 10) + '0';
		carry = sum / 10;
	}
	if (carry)
		r[index++] = carry + '0';
	r[index] = 0;
	rev_string(r);
	return (r);
}
