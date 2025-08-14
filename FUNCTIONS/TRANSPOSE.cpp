void transpose(vector<vector<int>> &v){
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v[i].size();j++){
            swap(v[i][j],v[j][i]);
        }
    }
}