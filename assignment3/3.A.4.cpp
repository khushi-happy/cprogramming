#include<iostream>
using namespace std;

int main(){

    int i;
    int sum=0;
    int n;

    cout<<"enter the integers :";
    for(i=1;i<=10;i=i+1){
        cin>>n;
        sum=sum+n;
    }

    for(i=1;i<=10;i=i+1){
        cout<<sum;
    }

}
