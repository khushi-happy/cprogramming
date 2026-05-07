#include<iostream>
using namespace std;

int main(){

    int i;

    for(i=0;i<5;i=i+1){
        if(i == 3){
            continue;
        }

        if(i == 5){
            break;
            }

    }
    cout<<i;
}
