#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"enter number:";
    cin>>n;

    if(n>0){
        cout<<"Positive integer";
    }
    else if(n<0){
        cout<<"Negative integer";
    }
    else{
        cout<<"integer is zero";
    }

}
