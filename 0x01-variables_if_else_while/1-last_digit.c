#include <stdlib.h>
<<<<<<< HEAD
#include <time.h>
#include <stdio.h>

=======

#include <time.h>

#include <stdio.h>



>>>>>>> af8a27441f756377d74103c9843737af7507ee58
/**
* main - where the program starts
* Return: returns 0
*/
<<<<<<< HEAD
int main(void)
{
int n;
int lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
printf("Last digit of %d is ", n);
if (lastdigit > 5)
{
printf("%d and is greater than 5\n", lastdigit);
}
else if (lastdigit == 0)
{
printf("%d and is 0\n", lastdigit);
}
else if (lastdigit < 6 && lastdigit != 0)
{
printf("%d and is less than 6 and not 0\n", lastdigit);
}
=======

int main(void)

{

int n;

int lastdigit;



srand(time(0));

n = rand() - RAND_MAX / 2;

lastdigit = n % 10;

printf("Last digit of %d is ", n);

if (lastdigit > 5)

{

printf("%d and is greater than 5\n", lastdigit);

}

else if (lastdigit == 0)

{

printf("%d and is 0\n", lastdigit);

}

else if (lastdigit < 6 && lastdigit != 0)

{

printf("%d and is less than 6 and not 0\n", lastdigit);

}

>>>>>>> af8a27441f756377d74103c9843737af7507ee58
return (0);
}
