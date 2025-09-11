#include<stdio.h>
    int main(){

        //variable declaration
            float c;float d;

        //initialising user input
            printf("Enter the temperature in centigrade :");
            scanf("%f",&c);

        //converting centigrade into degree fahrenheit
        d=(9*c)/5+32;
            printf("degree fahrenheit");
            printf("%f",d);
}
