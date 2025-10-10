#include<stdio.h>
int main(){

    //declaring variables
    int year;

    //user input
        printf("Enter the year:");
        scanf("%d",&year);

    //question logic

    if(year%4==0)
    printf("leap year");
    else if(year%100==0)
    printf("It is a leap year");
    else if(year%400==0)
    printf("it is a leap year");
    else
        printf("not a leap year");

}
