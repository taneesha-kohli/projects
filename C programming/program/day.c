#include<stdio.h>
void main()
{
    int days,year,month,week;
    printf("Enter the days:");
    scanf("%d",&days);
    year=days/365;
    printf("Year:%d\n",year);
    days=days-(year*365);
    month=days/30;
    printf("Month:%d\n",month);
    days=days-(month*30);
    week=days/7;
    printf("Week:%d\n",week);
    days=days-(week*7);
    printf("Day:%d\n",days);

    

   
   
}