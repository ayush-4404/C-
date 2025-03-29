#include<iostream>
using namespace std;
void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
void disp_arr(int a[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(int a[3][3]){
    for(int i=0;i<3-1;i++){
        for(int j=2;j>i;j--){ 
            if(i!=j){
                swap(&a[i][j],&a[j][i]);
            }
        }
        //cout<<endl;
    }
    //disp_arr(a);
    cout<<endl;
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    transpose(arr);
    disp_arr(arr);
    // int trr[3][3];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         trr[i][j]=arr[j][i];
    //     }
    // }
    // disp_arr(trr);
    return 0;
}