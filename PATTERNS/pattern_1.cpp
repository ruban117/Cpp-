//pattern 1 (RECTANGLE PATTERN)
/*  * * * *
    * * * *
    * * * *
    * * * *
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
            cout<<j<<" "<<endl;
        }
    }
    return 0;
}