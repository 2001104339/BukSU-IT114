#include <stdio.h>
#include <stdlib.h>

int main()
{
float a, b, add, mul, div, sub;

printf("Enter an Integer: ");
scanf("%f", &a);
printf("Enter another Integer: ");
scanf("%f", &b);

add = a+b;
printf("The sum of both integers is: %.f\n", add);

mul = a*b;
printf("The product of both integers is: %.f\n", mul);

div = a/b;
printf("The quotient of both integers is: %.1f\n", div);

sub = a-b;
printf("The difference of both integers is: %.f\n", sub);

    return 0;
}
