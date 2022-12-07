#include<stdio.h>
#include<string.h>
int main()
{
    char string [20];
    int length;
    printf("Enter the string=");
    gets(string);
    length=strlen(string)  ; 
    printf("\nAlphabets in the string=%d", length);  
    return 0;
}