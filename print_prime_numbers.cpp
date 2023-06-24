#include<iostream>
using namespace std;
int main(){
    int start,end,i,j;
    cin>>start;
    cin>>end;
    for(i=start;i<=end;i++){
        for(j=2;i<=start;j++){
            if(i%j == 0){
                break;
            }
        }
        if (j == i){
            cout<<i<<endl;
        }
    }
}