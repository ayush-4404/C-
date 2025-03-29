#include<iostream>
#include<vector>
using namespace std;

// given each row is sorted
int max_1s_row(vector<vector<int>> v){
    int max_1s=INT_MIN;
    int max_1s_row=-1;

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int NOof1s=v[i].size()-j;
                if(NOof1s>max_1s){
                    max_1s=NOof1s;
                    max_1s_row=i;
                }
                break;
            }
        }
    }
    return max_1s_row;
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