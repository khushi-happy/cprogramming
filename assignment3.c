#include<stdio.h>
int main() {
    //variable declaration
    int h;int m; int t;

    //initialising user input
        printf("Hours:");
        scanf("%d",&h);

        printf("Minutes :");
        scanf("%d",&m);

    //calculation
    t=(h*60)+m;
        printf("Total minutes: ");
        printf("%d",t);
}
