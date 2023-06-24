#include<iostream>
using namespace std;
int main(){
    int num1,num2,res;
    char a;
    cout<<"Enter The 1st number:- ";
    cin>>num1;
    cout<<"Enter The 2nd number:- ";
    cin>>num2;
    cout<<"Enter Any Operator:- ";
    cin>>a;
    switch(a){
        case '+':
            res=num1+num2;
            cout<<"After "<<num1<<"+"<<num2<<"= "<<res;
            break;
        case '-':
            res=num1-num2;
            cout<<"After "<<num1<<"-"<<num2<<"= "<<res;
            break;
        case '*':
            res=num1*num2;
            cout<<"After "<<num1<<"*"<<num2<<"= "<<res;
            break;
        case '/':
            res=num1/num2;
            cout<<"After "<<num1<<"/"<<num2<<"= "<<res;
            break;
        default:
            cout<<"Check Your Numbers Carefully";
            break;
    }
    return 0;
}