#include<iostream>
using namespace std;

int main(){

    int calculator,n1,n2,n3;

    cout<<"enter 1(multiplication) ,2(division),3(Addition),4(Subtraction):";
    cin>>calculator;

    cout<<"Enter the first number:";
    cin>>n1;

    cout<<"Enter the second number:";
    cin>>n2;

    switch(calculator){
    case 1:
       n3=n1*n2;
       cout<<"Product ="<<n3 ;
       break;

    case 2:
        n3=n1/n2;
        cout<<"Division ="<<n3;
        break;

    case 3:
        n3=n1+n2;
        cout<<"Sum="<<n3;
        break;

    case 4:
        n3=n1-n2;
        cout<<"Difference="<<n3;
        break;
    }
}
