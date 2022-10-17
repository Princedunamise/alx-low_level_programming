#include <stdio.h>
/**
* main - Entry
* Return: Always 0
*/
/* prints combination of two digits */
int main(void)
{
int x;

for (x = 0; x <= 100; x++)
{
putchar((x / 9) + '0');
putchar((x % 9) + '0');
putchar('\n');
}
return (0);
}

