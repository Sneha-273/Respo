#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    printf("Enter the first string=");
    gets(str1);
    {}
    printf("Enter the second string=");
    gets(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("Those are equal/same string");
    }
    else
        printf("Those are not equal/same string!!");
    return 0;
}