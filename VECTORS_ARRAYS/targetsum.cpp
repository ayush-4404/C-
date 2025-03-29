#include<iostream>
using namespace std;
int main(){
    int arr[]={3,1,2,4,0,6,2};
    int t_sum=7;
    for(int i=0;i<sizeof(arr)/4;i++){
        for(int j=i+1;j<sizeof(arr)/4;j++){
            for(int k=j+1;k<sizeof(arr)/4;k++){
                if(arr[i]+arr[j]+arr[k]==t_sum){
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
            }
        }
    }
    return 0;
}

