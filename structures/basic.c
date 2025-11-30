#include<stdio.h>
struct book{
    char name[50];
    int pages;
    float price;

};
int main()
{
    struct book b1;
    printf("enter book name:");
    gets(b1.name);   // gets used coz name  is stored in string
    printf("enter number of pages:");
    scanf("%d",&b1.pages);
    printf("enter price of book:");
    scanf("%f",&b1.price);

    printf("book name:%s\n",b1.name);
    printf("number of pages:%d\n",b1.pages);
    printf("price of book:%.2f\n",b1.price);

    return 0;
}