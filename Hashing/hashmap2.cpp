#include<bits/stdc++.h>
using namespace std;
int main(){
    string str; cin>>str;
    unordered_map<char,int> mpp;  // unorered map takes constant time 
    for(auto it:str){
        mpp[it]++;
    }
    for(auto itt:mpp){
        cout<<itt.first<<":"<<itt.second<<endl;
    }
    // int q;
    // cin>>q;
    // while(q--){
    //     int num; cin>>num;
    //     cout<<mpp[num];
    // }
    return 0;
}