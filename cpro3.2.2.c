#include<stdio.h>
int main(){
    int rollnumber,a,b,c;
    int totalmarks;
    char name[50];
    float percentage;

    printf("enter roll number :");
    scanf("%d",&rollnumber);

    printf("enter name :");
    scanf("%s",&name);

    printf("Marks:");
    scanf("%d%d%d", &a ,&b ,&c);

    totalmarks=a+b+c;


    percentage=totalmarks/300.00*100.00;


    printf("\nName :%s",name);
    printf("\nRoll number :%d",rollnumber );
    printf("\nTotal marks :%d",totalmarks);


    if(percentage>=60){
        printf("\nDivision :First");
    }
    else if(percentage>=50 && percentage<60){
        printf("\nDivision : Second");
    }
    else if(percentage>=40 && percentage<50){
        printf("\nDivision : Third");
    }
    else if(percentage<40){
        printf("\nFail");
    }







}
