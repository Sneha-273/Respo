#include<stdio.h>
struct student
{
    int rollno;
    char div;
    char name[20];
    float per;
};
int main()
{
    struct student s1;
    printf("Enter the roll number=");
    scanf("%d",&s1.rollno);
    printf("\nEnter the division=");
    scanf("%s",&s1.div);
    printf("\nEnter the name of student=");
    scanf("%s",&s1.name);
    printf("\nEnter the persentage=");
    scanf("%.2f",&s1.per);
    printf("-------------------------");
    
    return 0;
}