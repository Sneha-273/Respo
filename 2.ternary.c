#include<stdio.h>

int main()
{
    int age;
    char result;
    printf("Enter the age:");
    scanf("%d",&age);
    result=(age>=13)? printf("ready for vaccine"):printf("oops!! no eligible");
    return 0;
}