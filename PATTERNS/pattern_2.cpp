//pattern 2(HOLLOW RECTANGLE PATTERN)
/*
    * * * *
    *     *
    *     *
    *     *
    * * * *
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,row,column;
    cout<<"How Many Rows:- ";
    cin>>row;
    cout<<"How Many Columns:- ";
    cin>>column;
    for(i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            if(i == 1 || i ==row){
                cout<<"*"<<" ";
            }
            else{
                if(j == 1 || j == column){
                    cout<<"*"<<" ";
                }
                else{
                    cout<<" "<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}