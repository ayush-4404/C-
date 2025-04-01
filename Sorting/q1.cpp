// move all zeroes to end
#include<iostream>
using namespace std;
void sort(int arr[],int n){
    
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
    sort(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}