#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20],str3[20];
    printf("enter the first name=");
    gets(str1);
    printf("enter the middled name=");
    gets(str2);
    printf("enter the last name=");
    gets(str3);
    strcat(str1,str2);
    strcat(str1,str3);
    printf("Full name=%s",str1);
    return 0;
}