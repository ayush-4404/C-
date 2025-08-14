#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(i!=n){
                if(j==1||j==(2*i-1)){
                cout<<i;
                }
                else{
                    cout<<" ";
                }
            }
            else{
                cout<<i;
            }
        }
        cout<<endl;
    }
    return 0;
}