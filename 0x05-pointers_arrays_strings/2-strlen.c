#include"main.h"
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
