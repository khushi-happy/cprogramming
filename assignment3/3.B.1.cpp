#include<iostream>
using namespace std;

int main(){

    int n,remainder,reversed=0,original;

    cout<<"Enter the number:";
    cin>>n;

    original=n;

    while(n!=0){
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;
    }
    if(reversed==original){
        cout<<"Palindrome number";
    }
    else{
        cout<<"Not palindrome number";
    }
}
