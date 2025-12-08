#include<stdio.h>
int main(){

    int a[5];
    int b[5];
    int c[5];
    int i;

    printf("Enter 5 value");
    for(i=0;i<5;i=i+1){
        scanf("%d",&a[i]);
    }
    printf("Enter 5 value");
    for(i=0;i<5;i=i+1){
        scanf("%d",&b[i]);
    }
    for(i=0;i<=4;i=i+1){
        c[i]=a[i]+b[i];
        printf("%d",c[i]);
    }
}
