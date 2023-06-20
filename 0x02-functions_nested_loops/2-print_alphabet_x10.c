#include "main.h"
/**
 * print_alphabet_x10 - as the name of the function
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int y = 0;
char i;
while (y <= 9)
{
for (i = 'a'; i != '{'; i++)
{
_putchar(i);
};
_putchar('\n');
y++;
}
}
