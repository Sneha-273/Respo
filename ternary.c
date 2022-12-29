#include<stdio.h>

int main()
{
    int a=75,b=56;
    int num;
    num=sizeof(a)?(b>23 ?((a==75)?:'Z':0):0):0;
    
    printf("%d\n",num);    
    return 0;
}