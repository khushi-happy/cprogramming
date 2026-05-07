#include<iostream>
using namespace std;

int main(){

    char c;

    cout<<"Enter the character :";
    cin>>c;

    if(c>='A' && c<='Z'){
        cout<<"Upper case letter";
    }
    else if(c>='a' && c<='z'){
        cout<<"Lowercase letter";
    }
    else if(c>=0 && c<=9){
        cout<<"digit";
    }
    else{
        cout<<"Special character";
    }
}
