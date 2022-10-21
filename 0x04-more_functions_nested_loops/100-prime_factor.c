#include <stdio.h>
#include <math.h>

/**
 *main - find the largest prime factor
 *Description: Uses headers to link and a neested loop to achieve a goal
 *Return: 0 if no errors
 *A: Sqrt is a double by default so i did this to get ri of decimals
 *B: While the number is bigger than the sqrt of the original number
 *why? because if the number is prime, my loop will go until thenumber
 *If it has a factor then we know the largest possible prime factor
 *it can have, is less than the sqrt of the original number
 *Math cocept here, don't need to check full length
 *saves lots of ti,e to log n. This is a hard concept
 *UPDATE: After test cases, changed it from number > sqrt to
 *number > i because some small test cases did not pass
 *but with the change, it should work
 *C: If the current number can be modulo'd by i,reducing it and
 *running the loopwith the same i to further chuck it down if possible
 *this makes number smaller and smaller which wil be checked
 *in the outer while loop, this helps check for prime and factors
 *D: Increase i because number was no longer modulo'd by i
 *I could have put i+=2 to half the speed of the program
 *no need to check for even modulus since 2 handles that, but i would
 *have to refractor my code, starting with a i = 2 loop
 */

int main(void)
{
unsigned long i = 2;
unsigned long biggest = 0;
unsigned long number = 612852475143;
while (number > i)/* B */
{
while (number % i == 0)/* C */
{
if (i > biggest)
biggest = i;
number = number / i;
}
i++;/* D */
}
printf("%lu\n", biggest);
return (0);
}
