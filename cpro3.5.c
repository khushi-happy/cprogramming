#include<stdio.h>

    int main(){

        //declaring variables
        int maths;
        int physics;
        int chemistry;
        int totalmarks;
        int totalmarksmp;

        //user input
        printf("physics =");
        scanf("%d",&physics);

        printf("maths =");
        scanf("%d",&maths);

        printf("chemistry =");
        scanf("%d",&chemistry);

        //calculating total marks
        totalmarks=physics+chemistry+maths;
        printf("Total Marks =");
        printf("%d",totalmarks);

        //calculating total marks in physics and mathematics
        totalmarksmp=maths+physics;
        printf("\n total marks in physics and maths =");
        printf("%d",totalmarksmp);

        //checking candidate is eligible for the course or not.

        if(maths>=65)
            printf("\nThe candidate is eligible.");

        else if(physics>=55)
            printf("\nThe candidate is eligible.");

        else if(chemistry>=50)
            printf("\nThe candidate is eligible.");

        else if(totalmarks>=190)
            printf("\nThe candidate is eligible.");

        else if(totalmarksmp>=140)
            printf("\nThe candidate is eligible.");

        else
            printf("\nThe candidate is not eligible.");


    }
