#include "main.h"
#include <stdio.h>

/**
 *tegers.
 * @a: input array.
 * @n: input n element print_array - prints n elements of an array of ins
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
