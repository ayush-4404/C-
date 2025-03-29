#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> pascal(n);
    for(int i=0;i<n;i++){
        pascal[i].resize(i+1);
        for(int k=0;k<pascal[i].size();k++){
            if(k==0||k==i) pascal[i][k]=1;
            else{
                pascal[i][k]=pascal[i-1][k]+pascal[i-1][k-1];
            }   
        }
    }
    return pascal; 
}
int main(){
    int n; cin>>n;
    vector<vector<int>> ans;
    ans =pascalTriangle(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" "; 
        }
        cout<<endl;
    }

    return 0;
}