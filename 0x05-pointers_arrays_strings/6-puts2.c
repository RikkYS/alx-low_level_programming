#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
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

/**
 * puts2 - Prints every other character of a string
 * @str: The string to print
 */
void puts2(char *str)
{
	int index = 0;

	while (index < _strlen(str))
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
		index++;
	}

	_putchar('\n');
}
