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
    int arr[]={17,2,4,9,12,3,17,17};
    int size=sizeof(arr)/4;
    int idx1=largestele_idx(arr,size);
    int max=arr[idx1];
    for(int i=0;i<size;i++){
        if(arr[i]==max){          // if largest element is repeated.
            arr[i]=INT_MIN;
        }
    }
    int idx2=largestele_idx(arr,size);
    cout<<"2nd largest element is:"<<arr[idx2];
    return 0;
}