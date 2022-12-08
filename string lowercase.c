#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter the string=");
    gets(str);
    printf("the lower case of string=%s",strlwr(str));
    
    return 0;
}