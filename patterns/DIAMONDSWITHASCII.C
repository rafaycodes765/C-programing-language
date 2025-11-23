#include<stdio.h>
int main(){
    int n;
    printf("enter the values for rows:");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            printf(" ");
            for(j=1;j<= (2*i-1);j++)
                printf("%c",'A'+j-1);
        puts("");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++)
            printf(" ");
            for(j=1;j<= (2*i-1);j++)
                printf("%c",'A'+j-1);
        puts("");
    }
}