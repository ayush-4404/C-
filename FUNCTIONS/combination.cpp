#include<iostream>
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
    
    cout<<comb(4,2);
    return 0; 
}