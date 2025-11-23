/*Write a C program that takes a numeric input for a day (1 to 7) and uses a switch-case statement to print the
corresponding day of the week. Ensure that the program handles invalid inputs.*/
#include<stdio.h>
int main(){
    int a;
    printf("Enter value for finding a day:");
    scanf("%d",&a);
    if(a<=0 || a>=8){
      printf("invlaid value!");
    }
    else{
        switch (a){
            case 01:
            printf("monday");
            break;
            case 02:
            printf("tuesday");
            break;
            case 03:
            printf("wednesday");
            break;
            case 04:
            printf("thursday");
            break; 
            case 05:
            printf("friday");
            break; 
            case 06:
            printf("saturday");
            break; 
            case 07:
            printf("sunday");
            break;
        }

    }
}