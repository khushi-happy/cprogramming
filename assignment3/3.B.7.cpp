#include<iostream>
using namespace std;

int main(){

    int i,j;
    bool isprime;

    for(i=2;i<=100;i=i+1){
        isprime=true;

        for(j=2;j<i;j=j+1){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
            if(isprime){
            cout<<i<<" ";
            }
    }
return 0;
}
