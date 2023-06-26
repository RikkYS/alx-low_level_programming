#include "main.h"
/**
 * print_rev - as the name of the function
 *
 * @s: parameter of the function
 *
 * Return: depending on the function.
 */
void print_rev(char *s)
{
int strlen = _strlen(s);
while (strlen-- != 0)
_putchar(s[strlen]);
_putchar('\n');
}
/**
 * _strlen - as the name of the function
 *
 * @s: parameter of the function
 *
 * Return: depending on the function.
 */
int _strlen(char *s)
{
int i = 0;
while (*s++ != 0)
{
i++;
}
return (i);
}
