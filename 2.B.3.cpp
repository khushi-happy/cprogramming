#include<iostream>
using namespace std;

int main(){

    int n1,n2,n3;

    cout<<"Enter the first number:";
    cin>>n1;

    cout<<"Enter the second number:";
    cin>>n2;

    cout<<"Enter the third number:";
    cin>>n3;

    if(n1>=n2){
        if(n1>=n3){
            cout<<"largest number:"<<n1;
        }
        else{
            cout<<"Largest number:"<<n3;
        }
    }

    else if(n2>=n1){
        if(n2>=n3){
           cout<<"largest number:"<<n2;
        }
        else{
        cout<<"largest number :"<<n3;
    }
    }

}
