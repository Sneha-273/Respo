#include<stdio.h>

int main()
{
    int num;
    char result;
    printf("Enter the marks:");
    scanf("%d",&num);
    result=(num>=35)?'P':'F';
    printf("status:%c", result);
    return 0;
}