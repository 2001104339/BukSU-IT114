#include <stdio.h>
#include <stdlib.h>

int sumofarray(int a[],int n,int i)
 {
    if(i<n)
    return a[i]+sumofarray(a,n,++i);

    return 0;

 }
int main()
{
    int a[1000],i,n,sum;

        printf("Enter size of the array: ");
        scanf("%d", &n);

    for (i=0; i<n; i++)
{
        printf("Enter elements in array: ");
        scanf("%d", &a[i]);
}

    sum=sumofarray(a,n,0);
        printf("Sum of all array elements: %d",sum);

}
