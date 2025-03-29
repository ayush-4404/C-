#include<iostream>
#include<vector>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int comb(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        for(int k=0;k<i+1;k++){
            cout<<comb(i,k)<<" ";
        }
        cout<<endl;
    }
    return 0;
}