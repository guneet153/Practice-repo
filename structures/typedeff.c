#include<stdio.h>
typedef struct book{
    char name[50];
    int pages;
    float price;
} book;
book a;
book b;
int main()
{
    printf("enter book name:");
    gets(a.name);   // gets used coz name  is stored in string
    printf("enter number of pages:");
    scanf("%d",&a.pages);
    printf("enter price of book:");
    scanf("%f",&a.price);

    printf("book name:%s\n",a.name);
    printf("number of pages:%d\n",a.pages);
    printf("price of book:%.2f\n",a.price);

    return 0;
}
