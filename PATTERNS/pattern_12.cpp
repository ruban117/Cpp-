//pattern 12 (Palindromic Pattern)
/*
                                1
                              2 1 2
                            3 2 1 2 3
                          4 3 2 1 2 3 4
                        5 4 3 2 1 2 3 4 5
*/

#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter Any Row Number:- ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=n;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}