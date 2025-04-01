#include<iostream>
#include<array>
using namespace std;
void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"unsorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    bubbleSort(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}