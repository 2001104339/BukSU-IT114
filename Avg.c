#include <stdio.h>
#include <stdlib.h>

int main()
{
int sum, n1, n2, n3, n4, n5;
float avg;

printf("Input 5 numbers: ");
scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

sum = n1 + n2 + n3 + n4 + n5;

printf("The sum is: %d", sum);

avg = (float)(sum)/5;

printf("\nThe average is: %.1f", avg);

    return 0;
}
