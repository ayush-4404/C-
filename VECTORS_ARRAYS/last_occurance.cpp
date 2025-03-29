#include<iostream>
#include<vector>
using namespace std;
int main(){             //you can also start the loop from end.
    vector<int> v;
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int i=0;
    while(i<v.size()){
        cout<<v[i++]<<" ";
    }
    int x,idx=0;
    cout<<endl<<"enter x:";
    cin>>x;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            idx=i;
        }
    }
    cout<<idx;
    return 0;
}