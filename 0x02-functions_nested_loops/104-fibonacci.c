#include <stdio.h>

/**
 * fibonacci3 - prints the first 98 fibonacci numbers starting with 1 and 2
 * Return: no return value
 */
void fibonacci3(void)
{
	unsigned int fi, sec, next;
	int j;

	fi = 1;
	sec = 2;
	next = 0;
	for (j = 0; j < 98; j++)
	{
		if (j == 97)
		{
			printf("%u", fi);
			continue;
		}
		printf("%u, ", fi);
		next = fi + sec;
		fi = sec;
		sec = next;
	}
	printf("\n");
}

/**
 * main - calls the function fibonacci3
 * Return: Always 0
 */
int main(void)
{
	fibonacci3();

	return (0);
}
