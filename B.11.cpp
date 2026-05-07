#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    int c;
    int t;
    float p;

    cout<<"enter the marks in maths :";
    cin>>a;

    cout<<"enter the marks in physics :";
    cin>>b;

    cout<<"enter the marks in chemistry :";
    cin>>c;

    t=a+b+c;
    cout<<"total marks :"<<t;

    p=(t/300.0)*100.0;
    cout<<"total percentage :"<<p;

}
