#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=7;i++){
        int sum=0;
        for(int j=i;j<=7;j++) {
            cout<<j ;
            sum++;
        }
        for(int j=1;j<=7-sum;j++){
            cout<<j   ;
        }
        cout<<endl;
    }

    return 0 ;
}