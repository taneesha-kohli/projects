#include<stdio.h>
void main()
{
    int Hours,month,week,day;
    printf("Enter the Hours for converting those in month ,week and day:");
    scanf("%d",&Hours);   
    month=Hours/720;
    Hours=Hours-(month*720);
    week=Hours/168;
    Hours=Hours-(week*168);
    day=Hours/24;
    Hours=Hours-(day*24);
    printf("Month:%d\n",month);
    printf("Week:%d\n",week);
    printf("Day:%d\n",day);
    printf("Hours:%d\n",Hours);

    

    
   
}