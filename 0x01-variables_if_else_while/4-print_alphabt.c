#include <stdio.h>
/**
 *main - Prints alphabet in lowercase except q and e
 *Return: Always 0
 */
int main(void)
{
char l_letter = 'a';
while (l_letter <= 'z')
{
if (!(l_letter == 'e' || l_letter == 'q'))
{
putchar(l_letter);
}
l_letter++;
}
putchar('\n');
return (0);
}
