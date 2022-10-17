#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry
* Return: Always 0
*/
/* prints if the last digit of n is greater, less or zero */
int main(void)
{
int n;
int a;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
if (n > 5)
{
printf("Last digit of %d is zero and is 0\n", n, a);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, a);
}
else
{

printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
}
return (0);
}
