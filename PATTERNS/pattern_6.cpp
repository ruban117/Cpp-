//pattern 6(Floyd's Triangle)
/*
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,n,c=1;
    cout<<"Enter The Number Of Rows:- ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<c<<" ";
            c+=1;
        }
        cout<<endl;
    }
}