#include<stdio.h>
int main(){

    //variable declaration
        float r;float v;

    //initialising user input
        printf("Enter the radius of the sphere:");
        scanf("%f",&r);

    //calculating the volume
    v=(4*3.14159*r*r*r)/3;
        printf("Volume of the sphere :");
        printf("%f",v);
}
