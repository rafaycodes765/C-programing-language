#include<stdio.h>
int main(){
    int leap_year,a;
    printf("Enter year for find leap year:");
    scanf("%d",&leap_year);
    if(leap_year%4==0){
        printf("this is a leap year");
    }
    else{
        printf("this is a not leap year");
    }
}