#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
cout<<endl; 
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

    vector<int> v(n+1,0);
    cout<<"enter elements:";
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    display(v);

    prefixSUM(v);
    int q;
    cout<<"enter number of query:";
    cin>>q;
    for(int i=0;i<q;i++){
        int a,b;
        cout<<"enter a and b:";
        cin>>a; cin>>b;
        cout<<v[b]-v[a-1];
        cout<<endl;
    }


    return EXIT_SUCCESS ;
}