#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void prefixSUM(vector<int> &v){
    for(int i=1;i<v.size();i++){
        v[i]=v[i]+v[i-1];
    }
    return;
}

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    vector<int> v;
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    display(v);
    cout<<endl;
    prefixSUM(v);
    display(v);

    return 0;
}