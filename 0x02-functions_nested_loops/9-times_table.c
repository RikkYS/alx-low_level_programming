#include "main.h"
/**
 * times_table - as the name of the function
 *
 * Return: nothing.
 */
void times_table(void)
{
int x;
int y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
if (y != 9)
{
_putchar(',');
};  
int result = x * y;
if(result >= 10)
{
int a = result % 10;
int b = (result - a) / 10;
_putchar(b + 48);
_putchar(a + 48);
_putchar(' '); 
}
else
{
_putchar(result + 48);
}
_putchar(' ');
}
_putchar('\n');
}
}
