#include<iostream>
using namespace std;

int main(){

    int n1;
    int n2;
    int add;
    int sub;
    int product;
    int div;
    char choice;

    cout<<"enter A for addition , B for subtraction , M for multiplication , D for division ";
    cin>>choice;

    cout<<"enter first number:";
    cin>>n1;

    cout<<"enter second number:";
    cin>>n2;

    if(choice=='A'){
        add=n1+n2;
        cout<<"Sum="<<add;
    }
    else if(choice=='B'){
        sub=n1-n2;
        cout<<"Subtraction="<<sub;
    }
    else if(choice=='C'){
        product=n1*n2;
        cout<<"Product="<<product;
    }
    else if(choice=='D'){
        Division=n1/n2;
        cout<<"Division="<<div;
    }
    else{
        cout<<"Invalid option selected";
    }


}
