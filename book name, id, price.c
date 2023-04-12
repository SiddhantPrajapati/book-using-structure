//WAP to enter 3 book name, price and id.
#include<stdio.h>
struct book
{
    char name[20];
    int price,id;
}p[3];
void main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("\n enter book name:");
        scanf("%s",p[i].name);
        printf("\n enter book price:");
        scanf("%d",&p[i].price);
        printf("\n enter book id:");
        scanf("%d",&p[i].id);
    }
    for(i=0;i<3;i++)
    {
        printf("\n book name:%s",p[i].name);
        printf("\n book price:%d",p[i].price);
        printf("\n book id:%d",p[i].id);
    }
}
