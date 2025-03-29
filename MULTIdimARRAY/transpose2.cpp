#include<iostream>
using namespace std;
void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
// void disp_arr(int a[]){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int transpose[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            transpose[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    // int trr[3][3];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         trr[i][j]=arr[j][i];
    //     }
    // }
    // disp_arr(trr);
    return 0;
}