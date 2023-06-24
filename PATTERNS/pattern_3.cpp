//pattern 3(INVERTED HALF PYRAMID)
/*
    * * * * *
    * * * *
    * * *
    * *
    * 
*/

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter The Range:- ";
    cin>>n;
    for(i=n;i>=0;i--){
        for(j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}