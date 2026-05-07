#include<iostream>
using namespace std;

int main(){

    int i,s,j,n;

    cout<<"enter number :";
    cin>>n;

    for(i=1;i<=n;i=i+1){
        for(s=1;s<=n-1;s=s+1){
            cout<<"\n ";
        }
        for(j=1;j<=i;j=j+1){
            cout<<"*";
        }
    }
}
