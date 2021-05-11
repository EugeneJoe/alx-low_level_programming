#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * tostring - converts an int to a string
 * @num: int to be converted
 *
 * Return: pointer to string containing int
 */
char *tostring(int num)
{
	char *str = NULL;
	int i, rem, len = 0, n;

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		free(str);
		perror("Error: ");
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';
	return (str);
}

/**
 * rev_string - reverses a string passed to it
 * @s: string to be reversed
 * Return: no return value
 */
void rev_string(char *s)
{
	int x;
	char tmp;
	char *ss, *se;

	x = 0;
	while (*(s + x) != '\0')
		x++;
	ss = s;
	se = s + (x - 1);
	while (se > ss)
	{
		tmp = *ss;
		*ss = *se;
		*se = tmp;
		ss++;
		se--;
	}
}

/**
 * palindrome_finder - find largest palindrome that is product of 2 3-digit ints
 *
 * Return - palindrome
 */
int palindrome_finder(void)
{
	int a = 999;
	int b = 999;
	int pal = 0;
	char *pal1, *pal2;

	while (1)
	{
		pal2 = (char *)malloc(sizeof(char) * 7);
		if (pal2 == NULL)
		{
			printf("Malloc error\n");
			return (0);
		}
		pal = a * b;
		pal1 = tostring(pal);
		strcpy(pal2, pal1);
		rev_string(pal2);
		printf("%d * %d = %d\n", a, b, pal);
		printf("pal1 = %s, pal2 = %s\n\n", pal1, pal2);
		if (strcmp(pal1, pal2) == 0)
			break;
		if (b > 100)
		{
			b--;
			a--;
		}
		else
			break;
		free(pal1);
		free(pal2);
	}
	free(pal1);
	free(pal2);
	printf("%d\n", pal);
	return (pal);
}

int main(void)
{
	palindrome_finder();
	return (0);
}
