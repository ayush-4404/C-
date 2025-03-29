#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display2D(vector<vector<int>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void prefixSUMmatrix(vector<vector<int>> &v){
    for(int j=0;j<v.size();j++){
        for(int i=1;i<v[i].size();i++){
            v[j][i]=v[j][i]+v[j][i-1];
        }
    }
}
int main(){
    int m,n,l1,l2,r1,r2;
    cout<<"enter m and n:";
    cin>>m>>n;
    vector<vector<int>> v(m,vector<int> (n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    display2D(v);
    cout<<"enter (l1,r1)and (l2,r2):";
    cin>>l1>>r1>>l2>>r2;
    
    prefixSUMmatrix(v);
    display2D(v);
    int sum=0;
    for(int i=l1;i<=l2;i++){
        if(r1==0){
            sum+=(v[i][r2]);
        }
        else{
            sum+=(v[i][r2]-v[i][r1-1]);
        }
    }
    cout<<"resulting sum=:"<<sum;

    return 0;
}