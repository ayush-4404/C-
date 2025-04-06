#include <iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &v,int target){
    int lo=0;
    int hi=v.size()-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(v[mid]==target) {
            return mid;
        }
        else{
            if(v[mid]>target){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        
    }
    return -1;
}
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


    cout<<binarySearch(v,target);
    return 0;

}