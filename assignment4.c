#include<stdio.h>
int main() {

    //Declaring variables
    int tm;
    int m;
    int h;

    //initialising user input
    printf("total Minutes :");
    scanf("%d",&tm);

    //calculating hours
    h=(tm/60);
    printf("%d",h);
    printf("hours\t");

    //calculating minutes
    m=tm%60;
    printf("%d",m);
    printf("minutes\t");

}
