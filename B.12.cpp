#include<iostream>
using namespace std;

int main(){

    int r;
    int area;
    int circumference;
    float pie=3.14;

    cout<<"enter the radius of the circle :";
    cin>>r;

    area=pie*r*r;
    cout<<"area of the circle :"<<area<<"\n";

    circumference=2*pie*r;
    cout<<"circumference of the circle :"<<circumference;
}
