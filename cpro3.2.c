#include<stdio.h>
int main(){

    //declaring variable
        int m;
        int n;

    //asking the user input
        printf("enter the value of m:");
        scanf("%d",&m);

    //question logic
        if (m>0)
            printf("n is 1");
        else if(m==0)
            printf("n is 0");
        else if (m<0)
            printf("n is -1");
}
