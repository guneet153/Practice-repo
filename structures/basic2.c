#include<stdio.h>
struct person{
    char name[50];
    int age;
    float salary;

} p1,p2;
int main()
{
    printf("enter person 1 name:");
    gets(p1.name);

    printf("enter person 2 age:");
    scanf("%d",&p2.age);
    

    
    printf("Name: %s\n",p1.name);

    printf("Age: %d\n",p2.age);
    

    return 0;
}
