#include<stdio.h>
int main(){
    int a,b,n,row,ast=1,inc=1;
    printf("enter the value for rows:");
    scanf("%d",&row);
    n=(row/2)+1;
    for(a=1;a<=row;a++){
        for(b=1;b<=ast;b++){
            printf("*");
        }puts("");
        if(a==n){
            inc=-1;
        }
        ast+=inc;
    }
}
