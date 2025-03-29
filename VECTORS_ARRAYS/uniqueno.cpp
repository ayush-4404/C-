#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,3,2,4,1};
    int s=sizeof(arr)/4;
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
                break;
            }
        }
    }
    for(int i=0;i<s;i++){
        if(arr[i]>0) {
            cout<<arr[i];
            break;
        }
    
    }
    return 0;
}