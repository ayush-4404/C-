#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;

    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    v.insert(v.begin()+2,6);
    v.erase(v.end()-2);
    cout<<endl;
    for(int e:v){
        cout<<e;
    }
    return 0;
}