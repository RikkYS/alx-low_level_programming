#include "main.h"
/**
 * swap_int - as the name of the function
 *
 * @a: parameter of the function
 * @b: parameter of the function
 *
 * Return: depending on the function.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
