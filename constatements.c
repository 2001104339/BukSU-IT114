#include <stdio.h>
#include <stdlib.h>

int main()
{

int age;
char name[40];

printf("Input your name: ");
fgets(name, sizeof(name), stdin);
printf("Input your age: ");
scanf("%d", &age);

if (age>=18)
{
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("You are eligible for voting.");
}
    else if (age==0)
    {
        printf("Name: %s", name);
        printf("Age: %d\n", age);
        printf("Invalid Age, Please Try Again.");
    }
else
{
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("You are not eligible for voting.");
}
    return 0;
}

