#include<iostream>
using namespace std;
int largestele_idx(int array[],int size){
    int max=INT_MIN,idx;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            idx=i;
        }
    }
    return idx;
}
int main(){
    int arr[]={17,2,4,9,12,3,17,18};
    int size=sizeof(arr)/4;
    int idx1=largestele_idx(arr,size);
    int max=arr[idx1],max2=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max2&&arr[i]!=max){
            max2=arr[i];
        }
    }
    cout<<"2nd largest element is:"<<max2;
    return 0;
}