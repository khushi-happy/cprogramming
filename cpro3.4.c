#include<stdio.h>

    int main(){

        //declaring variable
        int a;
        int b;
        int c;

        //user input
            printf("Enter value of a:");
            scanf("%d",&a);

            printf("Enter the value of b:");
            scanf("%d",&b);

            printf("Enter the value of c:");
            scanf("%d",&c);

        //question logic
            if (a == b && b == c && c== a){
                printf("All numbers are same:%d");
            }
            else if (b >= a && b >= c){
                printf("The Largest number is :%d",b);
            }
            else if (c >= a && c >= a){
                printf("The Largest number is:%d",c);
            }
            else if (a >= b && a >= c){
                printf("The largest number is :%d",a);
            }




    }

