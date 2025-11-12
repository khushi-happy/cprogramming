#include<stdio.h>

int main(){

    int n;float radius;float area;int length;int width;float area2;int base;int height;float area3;
    float p=3.14;

    printf("Choose the option : 1 (circle) ,2(rectangle),3(Triangle):");
    scanf("%d",&n);

    if(n==1){
        printf("1(circle), Radius :");
        scanf("%f",&radius);
        area=p*radius*radius;
        printf("Area of the circle = %.2f",area);
    }
    else if(n==2){
        printf("2(rectangle) , length=");
        scanf("%d",&length);
        printf("width=");
        scanf("%d",&width);
        area2=length*width;
        printf("Area of the rectangle :%.2f",area2);

    }
    else if(n==3){
        printf("3(triangle) , base=");
        scanf("%d",&base);
        printf("height =");
        scanf("%d",&height);
        area3=0.5*base*height;
        printf("Area of the Triangle =%.2f",area3);
    }
    else {
        printf("Invalid option selected");
    }

}
