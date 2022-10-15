#include <stdio.h>
/**
 *main - Prints numbers from base 10 without using type char
 *Return: Always 0
 */
int main(void)
{
int num;
for (num = 48; num <= 57; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
