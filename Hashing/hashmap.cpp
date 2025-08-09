#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mpp;
    for(auto it:arr){
        mpp[it]++;
    }
    int q;
    cin>>q;
    while(q--){
        int num; cin>>num;
        cout<<mpp[num];
    }
    return 0;
}

//hashing division method is used to store numbers greater than 10^7
//other two methods are: folding method and mod square method 
// divison method: modulo 10 then chain same remainder wale 
// if every hash goes to same key then it causes collision in mapping
//hence it becomes the worst possible case 
