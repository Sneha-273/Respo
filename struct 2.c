#include<stdio.h>
struct info
{
char name [20];
char gender;
int age;
char grd[20];
};
int main()
{
struct info a;

    printf("Enter the candidate's name=");
    scanf("%s",&a.name);
    printf("\nEnter the candidate's gender[F/M]=");
    scanf("%s",&a.gender);
    printf("\nEnter the candidate's age=");
    scanf("%s",&a.age);
    printf("\nEnter the candidate's Graduation status=");
    scanf("%s",&a.grd);
    printf("*----------------------------*");
    printf("\ncandidate name:%s",a.name);
    printf("\ncandidate gender=%s",a.gender);
    printf("\ncandidate age=%d",a.age);
    printf("\ncandidate graduation=%s",a.grd);
    return 0;
}