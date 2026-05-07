#include<iostream>
using namespace std;

int main(){

    int i;
    int sum=0;
    int n;

    cout<<"Enter the number :";
    cin>>n;

    for(i=0;i<=n;i=i+1){
        cout<<i<<"+"<<sum;
        sum=sum+i;
    }
    cout<<sum;
}
