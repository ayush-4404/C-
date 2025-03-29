#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> PRINTspiral(int n){
    vector<vector<int>> v(n,vector<int>(n));
    int left=0,right=n-1,top=0,bottom=n-1;
    int count=1,limit=n*n;
    while (left<=right&&top<=bottom)
    {
        for(int i=left;i<=right;i++){
            v[top][i]=count;
            count++;
        }
        if(count>limit) break;   // ye statement iti baar likhne ki jgh ek while loop me ek hi row/column traverse kro.(if or else if use krke)
        top++;                   
        for(int i=top;i<=bottom;i++){
            v[i][right]=count;
            count++;
            
        }
        if(count>limit) break;
        right--;
        for(int i=right;i>=left;i--){
            v[bottom][i]=count;
            count++;
        }
        if(count>limit) break;
        bottom--;
        for(int i=bottom;i>=top;i--){
            v[i][left]=count;
            count++;
        }
        if(count>limit) break;
        left++;
    }
    // for(int i=0;i<v.size();i++){
    //     for(int j=0;j<v[0].size();j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    return v;
    
}
int main(){
    int n; cin>>n;
    vector<vector<int>> mat(n, vector<int> (n));
    mat=PRINTspiral(n);
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}