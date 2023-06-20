#include "main.h"
/**
 * print_sign - as the name of the function
 *
 *@n: is the number gonna trigger our conditions
 *
 * Return: Depending on the n.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
}
else
{
_putchar('-');
return (-1);
}
return (0);
}
