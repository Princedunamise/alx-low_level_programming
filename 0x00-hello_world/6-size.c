#include <stdio.h>
/**
* main - Entry
* Return: Always 0
*/
int main(void)
{
printf("size of a char: %zu byte(s)\n", sizeof(charType));
printf("size of an init: %zu byte(s)\n", sizeof(intType));
printf("size of an init: %zu byte(s)\n", sizeof(long int)); 
printf("size of an init: %zu byte(s)\n", sizeof(doubleType));
printf("size of an init: %zu byte(s)\n", sizeof(floatType));
return (0);
}
