#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an array
 * @a: The array to print
 * @n: The number of elements in the array
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		(index + 1 == n) ? printf("%d", a[index]) : printf("%d, ", a[index]);
		index++;
	}
	printf("\n");
}
