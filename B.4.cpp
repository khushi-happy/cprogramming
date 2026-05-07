#include<iostream>
using namespace std;
int main (){
    float basic_salary;
    float gross_salary;
    float dearness_allowance;
    float house_rent_allowance;
    float other_allowance;

    cout<<"enter basic salary";
    cin>>basic_salary;

    dearness_allowance=0.40*basic_salary;
    house_rent_allowance=0.20*basic_salary;

    gross_salary=basic_salary+dearness_allowance+house_rent_allowance;

    cout<<"Gross Salary :"<<gross_salary;

}
