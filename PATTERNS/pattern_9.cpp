//pattern 9(0-1 Pattern)
/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter The Row Number:- ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%2!=0){
                if(j%2!=0){
                    cout<<"1"<<" ";
                }
                else{
                    cout<<"0"<<" ";
                }
            }
            else if(i%2 == 0){
                if(j%2!=0){
                    cout<<"0"<<" ";
                }
                else{
                    cout<<"1"<<" ";
                }
            }
        }
        cout<<endl;
    }
}