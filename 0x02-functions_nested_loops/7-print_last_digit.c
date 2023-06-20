#include "main.h"
/**
 * print_last_digit - as the name of the function
 *
 * @n: parameter of the function
 *
 * Return: last digit number.
 */
int print_last_digit(int n)
{
int number = n < 0 ? n % 10 * -1 : n % 10;
_putchar(48 + number);
return (number);
}
