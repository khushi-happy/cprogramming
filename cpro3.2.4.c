#include<stdio.h>
    int main(){

        int a,b,c;

        printf("enter the length of a =");
        scanf("%d",&a);

        printf("enter the length of b =");
        scanf("%d",&b);

        printf("enter the length of c =");
        scanf("%d",&c);

        if(a==b && b==c){
            printf("The triangle is equilateral.");
        }
        else if(a==b || b==c){
            printf("The triangle is isosceles.");
        }
        else if(a!=b && b!=c){
            printf("The triangle is scalene.");
        }
    }
