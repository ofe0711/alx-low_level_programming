#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - assign a random number to the variable n each time it is executed
* The string Last difit of n
* Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 5 )
{
printf("Last digit of %d and is greater than 5\n", n, lastn);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastn);
}
else if(n<6 && n !=0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
