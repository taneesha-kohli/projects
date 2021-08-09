#include <stdio.h>
int table (int num,int a);
int main(){
    int num,a=1;
    printf("Enter the value for printing the table:");
    scanf("%d",&num);
    table (num,a);
    return 0;
}
int table (int num,int a){

    if(a<11){
         printf("%d*%d=%d\n",num,a,num*a);
    table(num,a+1);
   
    }
   

}
