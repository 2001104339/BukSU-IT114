#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[3][2];
    int id, pin;
    x[0][0]=2255;
    x[0][1]=1234;
    x[1][0]=2256;
    x[1][1]=4321;
    x[2][0]=2257;
    x[2][1]=1243;

    printf("ID Number: ");
    scanf("%d", &id);
    printf("PIN CODE: ");
    scanf("%d", &pin);

    if(id==x[0][0] && pin==x[0][1])
    {
    printf("You have successfully logged in\nID#:%d", id);
    }else if(id==x[1][0] && pin==x[1][1])
    {
    printf("You have successfully logged in\nID#:%d", id);
    }else if(id==x[2][0] && pin==x[2][1])
    {
    printf("You have successfully logged\nID#:%d", id);
    }else
    {
    printf("Invalid ID/PIN!");
    }

    return 0;
}
