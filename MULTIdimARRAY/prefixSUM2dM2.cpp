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
void prefixSUMmatrixR(vector<vector<int>> &v){
    for(int j=0;j<v.size();j++){
        for(int i=1;i<v[i].size();i++){
            v[j][i]=v[j][i]+v[j][i-1];
        }
    }
}
// make a function calculating the sum of columns as well
void prefixSUMmatrixC(vector<vector<int>> &v){
    for(int j=1;j<v.size();j++){
        for(int i=0;i<v[j].size();i++){
            v[j][i]=v[j][i]+v[j-1][i];
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
    
    prefixSUMmatrixR(v);
    prefixSUMmatrixC(v);
    display2D(v);
    int sum=0;
    if(l1==0&&r1==0){
        sum=v[l2][r2];
    }
    else if(r1==0){
        sum=v[l2][r2]-v[l1-1][r2];
        }
    else if(l1==0){
        sum=v[l2][r2]-v[l2][r1-1];
    }
    else{
        sum=(v[l2][r2]-v[l1-1][r2]-v[l2][r1-1]+v[l1-1][r1-1]);
    }
    cout<<"resulting sum=:"<<sum;

    return 0;
}