#include "main.h"
/**
 * _islower - as the name of the function
 *
 *@c: The character to check
 *
 * Return: Always 0.
 */
int _islower(int c)
{
char i;
for (i = 'a'; i != '{'; i++)
{
if (i == c)
{
return (1);
}
}
return (0);
}
