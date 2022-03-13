#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - assign a random number to the variable n each time it is executed
* The string Last digit of n
* Return: 0
*/
int main(void)
{
int n, lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
 lastDigit = n % 10;
if (lastDigit > 5 )
{
printf("Last digit of %d and is greater than 5\n", n, lastn);
}
else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastn);
}
else if(lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
