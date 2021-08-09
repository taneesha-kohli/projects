#include<stdio.h>
#define pi 3.14
#define area(n) (pi*r*r)
void main(){
    float r,a;
    printf("Enter the value for radius for finding area of cicle:");
    scanf("%f",&r);
    a=area(r);
    printf("area of circle is:%f\n",a);

}