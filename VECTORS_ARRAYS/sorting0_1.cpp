#include<iostream>
#include<vector>
using namespace std;
void sortZerosAndOne(vector<int> &v){
    int zero=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) zero++;
    }
    for(int i=0;i<v.size();i++){
        if(i<zero) v[i]=0;
        else v[i]=1;
    }
}
// it is a good practice to pass vectors by reference, extra memeory is not created
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;

    vector<int> v;
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    display(v);
    cout<<endl;
    sortZerosAndOne(v);
    display(v);
    return 0;
}