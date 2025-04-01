#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[minIndex]) minIndex=j; 
        }
        swap(&v[minIndex],&v[i]);

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
    selectionSort(arr);
    cout<<endl<<"sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}