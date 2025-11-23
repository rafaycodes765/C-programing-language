#include <stdio.h>

int main(void) {

    int var1 = 0;
    int var2 = 0;

    printf("Enter the first number: ");
    scanf("%d", &var1);

    printf("Enter the second number: ");
    scanf("%d", &var2);


    int added = 0;
    added = var1 + var2;

    printf("The sum is %d\n", added);



}