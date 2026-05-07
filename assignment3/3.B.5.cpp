#include<iostream>
using namespace std;

int main(){

    int n;
    int rem;
    int sum=0;

    cout<<"Enter digits :";
    cin>>n;

    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<"sum="<<sum;
}
