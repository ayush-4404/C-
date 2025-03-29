#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void spiral(vector<vector<int>> &v){
    int left=0,right=v[0].size()-1,top=0,bottom=v.size()-1;
    int count=0,limit=v.size()*v[0].size();
    while (left<=right&&top<=bottom)
    {
        for(int i=left;i<=right;i++){
            cout<<v[top][i]<<" ";
            count++;
        }
        if(count==limit) break;   // ye statement iti baar likhne ki jgh ek while loop me ek hi row/column traverse kro.(if or else if use krke)
        top++;                   
        for(int i=top;i<=bottom;i++){
            cout<<v[i][right]<<" ";
            count++;
            
        }
        if(count==limit) break;
        right--;
        for(int i=right;i>=left;i--){
            cout<<v[bottom][i]<<" ";
            count++;
            
        }
        if(count==limit) break;
        bottom--;
        for(int i=bottom;i>=top;i--){
            cout<<v[i][left]<<" ";
            count++;
            
        }
        if(count==limit) break;
        left++;
    }
    
}

int main(){
    int n,m; cin>>m>>n;
    vector<vector<int>> mat(m, vector<int> (n));
    for(int i=0;i<m;i++){ 
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    spiral(mat);
    return 0;
}