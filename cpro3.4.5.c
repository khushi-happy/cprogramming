#include<stdio.h>
int main()
{

    int option;
    int number1;
    int number2;
    int add;
    int diff;
    int product;
    int quotient;

    printf("select 1(Addition),2(Subtraction),3(Multiplication),4(Division)");
    scanf("%d",&option);

    if(option==1)
    {
        printf("1(Addition) , Number1=");
        scanf("%d",&number1);
        printf("Number2=");
        scanf("%d",&number2);
        add=number1+number2;
        printf("Sum=%d",add);

    }
    else if(option==2)
    {
        printf("2(Subtraction) , Number1=");
        scanf("%d",&number1);
        printf("Number2=");
        scanf("%d",&number2);
        diff=number1-number2;
        printf("Difference=%d",diff);
    }
    else if(option==3)
    {
        printf("3(Multiplication) , Number1=");
        scanf("%d",&number1);
        printf("Number2=");
        scanf("%d",&number2);
        product=number1*number2;
        printf("Product=%d",product);
    }
    else if(option==4)
    {
        printf("4(Division) , Number1=");
        scanf("%d",&number1);
        printf("Number2=");
        scanf("%d",&number2);
        if(number2==0)
        {
            printf("Division by Zero is not allowed.");
        }
        else
        {
            quotient=number1/number2;
            printf("Quotient=%d",quotient);
        }


    }
    else{
        printf("Invalid option selected.");
    }


}
