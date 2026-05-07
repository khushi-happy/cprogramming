#include<iostream>
using namespace std;

int main(){

    int n1,n2,n3;

    cout<<"Enter first number :";
    cin>>n1;

    cout<<"Enter second number :";
    cin>>n2;

    cout<<"Enter third number :";
    cin>>n3;

    if(n1>n2 && n1>n3){
        cout<<"The largest number is "<<n1;
    }
    else if(n2>n1 && n2>n3){
        cout<<"The largest number is "<<n2;
    }
    else if(n3>n1 && n3>n2){
        cout<<"The largest number is "<<n3;
    }
    else{
        cout<<"All number are equal";
    }
}
