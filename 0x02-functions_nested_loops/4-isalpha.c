#include "main.h"
/**
 * _isalpha - as the name of the function
 *
 *@c: The character to check
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
char i;
for (i = 'A'; i != '{'; i++)
{
if (i == c)
{
return (1);
}
}
return (0);
}
