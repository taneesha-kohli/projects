#include<stdio.h>
void main()
  {
    
      int days,day,year,month,week;
      printf("Enter the days to know how days months and year are on these days:\n");
      scanf("%d",&days);
      year=days/365;
      printf("year:%d \n",year);
       month=(days%365)/29;
      printf("month :%d\n",month);
      week=((days%365)/29)/7;
      printf("week:%d\n",week);
     day=(days%365)%29;
      printf("day :%d\n",day);
     
    

     }
                                                                    //days //year //month //week