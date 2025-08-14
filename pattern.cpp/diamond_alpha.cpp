#include<iostream>
using namespace std;
int main(){
    int n=7;
    for(int i=1;i<=(n+1)/2;i++){
        for(int j=n/2;j>=i;j--){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            printf("%c ",j+64);
        }
        cout<<endl;
    }
    for(int i=1;i<(n+1)/2;i++){
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n-2*i;j++){
            printf("%c ",j+64);
        }
        cout<<endl;
    }
    return 0;
}