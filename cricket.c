//Wap to get record(player name,team name & runs of innings) of any three indian cricket team.print the record according to
// name of player in ascending order.
#include<stdio.h>
struct cricket
{
char team[20];
}p[3];

{
    int i,c;
    char a[20];
    for(i=0;i<3;i++)
    {
        printf("enter team name:");
        gets(p)
        printf("\n enter player name:");
        gets(p[i].a);
        printf("\n enter runs:");
        scanf("%d",&p[i].c);
    }
    return 0;
}
