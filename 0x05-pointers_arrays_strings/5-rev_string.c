#include "main.h"
/**
 *rev_string - reverse a string
 *_putchar - prints each character
 *@s: char to check
 *
 *Description: This will reverse a string
 *Return: 0 is success
 */
void rev_string(char *s)
{
int a = 0, b, c;
car d;
while (s[a] != '\0')
{
a++;
}
c = a - 1;
for (b = 0; c >= 0 && b < c; c--, b++)
{
d = a[b];
s[b] = s[c];
s[c] = d;
}
}
