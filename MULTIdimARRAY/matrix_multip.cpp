#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    int brr[4][2];
    int res[3][2];
    cout<<"enter first matrix";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter 2nd matrix";
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cin>>brr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            res[i][j]=0;
            for(int k=0;k<4;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
} 