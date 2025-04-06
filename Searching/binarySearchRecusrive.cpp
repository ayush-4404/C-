#include <iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &v,int target,int lo,int hi){
    int mid=lo+(hi-lo)/2; // modified mid to tackle overflow
    if(lo>hi) return -1;
    if(v[mid]==target) return mid;
    else if(v[mid]>target) return binarySearch(v,target,lo,mid-1);
    else return binarySearch(v,target,mid+1,hi);

    //return -1;
}

// time complexity: 0(logn)
// space complexity: 0(logn)
int main(){
    int n;cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"enter target:";
    int target;
    cin>>target;


    cout<<binarySearch(v,target,0,n-1);
    return 0;

}