/*Write a C program that takes a numeric input for a month (1 to 12) and uses a switch-case statement to
determine the season (e.g., spring, summer, fall, or winter) associated with that month.*/
#include<stdio.h>
int main(){
    int months,a,b,c,d;
    printf("enter the value of for months:(1-12)");
    scanf("%d",&months);
    printf("enter the value of for months:(1-3)");
    scanf("%d",&a);
    printf("enter the value of for months:(4-6)");
    scanf("%d",&b);
    printf("enter the value of for months:(7-9)");
    scanf("%d",&c);
    printf("enter the value of for months:(10-12)");
    scanf("%d",&d);
    if(months<=0 || months>=13){
        printf("invalid month");
    }
    else if(a<1 && a>3){
        printf("invalid");
    }
    else if(b<4 && b>6){
        printf("invalid");
    }
    else if(c<6 && c>9){
        printf("invalid");
    }
    else if(d<9 && a>12){
        printf("invalid");
    }

    switch (a,b,c,d){
    {
    case 'a':
        printf("spring");
        break;
    case 'b':
         printf("summer");
         break;
    case 'c':
         printf("fall");
         break;
    case 'd':
         printf("winter");
         break;     
    default:
        break;
    }}}