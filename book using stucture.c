#include<stdio.h>
void main()
{
    struct book
    {
        char name[20];
        int pages;
        float price;
    }s[5];
    int i;
    for(i=0;i<4;i++)
    {


    printf("\n enter the name of book.\n");
    scanf("%s",s[i].name);
    printf("\n enter the number of pages\n");
    scanf("%d",&s[i].pages);
    printf("\n enter the price of book\n");
    scanf("%f",&s[i].price);


    }
}
