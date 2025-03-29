#include<iostream>
#include<vector>
using namespace std;
// too confusing is this method in the lec.
// given each row is sorted
int max_1s_row(vector<vector<int>> v){
    int ltmost1=-1;
    int max_1_row=-1;

    for(int i=0;i<v.size();i++){
        for(int j=v[i].size()-1;j>=0;j--){
            if(v[i][j]==1){
                ltmost1=j;
                max_1_row=i;
            }

        }
    }

}

int main(){
    int n,m;
    cin>>m>>n;
    vector<vector<int>> vec(n,vector<int> (m));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>vec[i][j];
        }
    }

    int res=max_1s_row(vec);
    cout<<"index of row having maximum 1s is:"<<res;
    return 0;
}