#include "main.h"
/**
 * _puts - as the name of the function
 *
 * @str: parameter of the function
 *
 * Return: depending on the function.
 */
void _puts(char *str)
{
while (*str != 0)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
