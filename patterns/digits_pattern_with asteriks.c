#include<stdio.h>
int main(){
    int a,b,spc=7;
    for(a=1;a<=7;a++){
        for(b=1;b<=a;b++){
            printf("%d",b);
        }
        for(b=1;b<=(7-a);b++){
        printf("*");
    }puts("");
    }}