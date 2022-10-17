#include <stdio.h>
/**
* main - Entry
* Return: Always 0
*/
/* print alpha in lowercase, except q and a, followed by a new line */
int main(void)
{
char la;

for (la = 'a'; la <= 'z'; la++)
{
if (la != 'e' && la != 'q')
putchar (la);
}
putchar('\n');
return (0);
}
