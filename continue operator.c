#include<stdio.h>

int main()
{
    int x,n=1;
    for(x=0;x<20;x++)
    {
    if(x==n)
    {
    n=n+2;
    continue;
    }
    printf("%d\n",n);
    }
    return 0;
}