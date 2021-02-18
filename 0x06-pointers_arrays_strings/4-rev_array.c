/**
 * reverse_array - reverse the contents of an array of integers
 * @a: pointer to array to be reversed
 * @n: number of elements of array a
 *
 * Return: no return value
 */
void reverse_array(int *a, int n)
{
	int temp;
	int *pst, *pend;

	pst = a;
	pend = a + (n - 1);
	while (pend > pst)
	{
		temp = *pst;
		*pst = *pend;
		*pend = temp;
		pst++;
		pend--;
	}
}
