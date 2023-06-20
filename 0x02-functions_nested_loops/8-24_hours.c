#include "main.h"
/**
 * jack_bauer - as the name of the function
 *
 * Return: nothing.
 */
void jack_bauer(void)
{
int a = 0;
int b = 0;
int c = 0;
int d = 0;
while (0 < 1)
{
_putchar(a + 48);
_putchar(b + 48);
_putchar(':');
_putchar(c + 48);
_putchar(d + 48);
_putchar('\n');
d++;
if (d == 10)
{
d = 0;
c++;
if (c == 6)
{
c = 0;
b++;
if (b == 4)
{
if (a == 2)
{
break;
}
}
if (b == 10)
{
b = 0;
a++;
}
}
}
}
}
