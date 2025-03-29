#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<vector<int>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(vector<vector<int>> &v){
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v[i].size();j++){
            swap(v[i][j],v[j][i]);
        }
    }
}
void rotateARRAY(vector<vector<int>> &v){
    transpose(v);
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
    }
}
int main(){
    int n; cin>>n;
    vector<vector<int>> mat(n, vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    display(mat);
    cout<<endl;
    rotateARRAY(mat);
    display(mat);
    return 0;
}