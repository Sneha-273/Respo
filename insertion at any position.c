#include<stdio.h>

int main()
{
    int a[10],num,pos,z,num1;
    printf("Enter the array size:");
    scanf("%d",&num);
    printf("\nEnter elements:");
    for(z=0; z<num; z++)

    {
        scanf("%d",&a[z]);
    }
    printf("\nEnter position:");
    scanf("%d",&pos);
    printf("\nThe new element:");
    scanf("%d",&num1);
    for(z=num-1; z>=pos-1; z--)
    {
        a[z+1]=a[z];
    }
    a[pos-1]=num1;
    printf("The new array:");
    for(z=0; z<=num; z++)
    {
        printf("%d\t",a[z]);
    }

    return 0;
}