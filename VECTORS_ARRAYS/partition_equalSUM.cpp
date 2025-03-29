#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
bool EQsum(vector<int> v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    for(int i=0;i<v.size();i++){
        if(i!=0){
            v[i]+=v[i-1];
        }
        if(v[i]+v[i]==sum) {
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    vector<int> v;
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    if(EQsum(v)==false) cout<<"not present";
    else cout<<"present";
    return EXIT_SUCCESS;
}