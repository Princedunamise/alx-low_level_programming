#include <stdio.h>
/**
* main - Entry
* Return: Always 0
*/
/* prints combination of two digits */
int main()
{

int x, y;

for (x = 48; x <= 56; x++)
{

for (y = 49; y <= 57; y++)
{

if (y > x)
{

putchar(y);
putchar(x);

if (x != 56 || y != 57)
{

putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
