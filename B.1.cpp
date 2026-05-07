#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    int c;

    cout<<"enter the value of a=";
    cin>>a;

    cout<<"enter the value of b=";
    cin>>b;

    c=b;
    b=a;
    a=c;

    cout<<"a="<<a<<"\n";
    cout<<"b="<<b;
}
