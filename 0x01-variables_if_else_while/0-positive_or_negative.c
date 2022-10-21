#include <stdlib.h>
<<<<<<< HEAD
#include <time.h>
#include <stdio.h>

/**
* main - where the program starts
* Return: returns 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
=======

#include <time.h>

#include <stdio.h>



/**
 * main - where the program starts
 * Return: returns 0
 */

int main(void)

{
int n;



srand(time(0));

n = rand() - RAND_MAX / 2;

if (n > 0)

{

printf("%d is positive\n", n);

}

else if (n == 0)

{

printf("%d is zero\n", n);

}

else if (n < 0)

{

printf("%d is negative\n", n);

}

return (0);

>>>>>>> af8a27441f756377d74103c9843737af7507ee58
}
