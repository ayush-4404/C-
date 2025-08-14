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
int main(){
    int a; cin>>a;
    cout<<fact(a);
    return 0;
}