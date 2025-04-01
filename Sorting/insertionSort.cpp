#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void insertionSort(vector<int> &v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int current=v[i];
        int j=i-1; 
        while(j>=0&&v[j]>current){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=current;

    }
}
main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"unsorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    insertionSort(arr);
    cout<<endl<<"sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}