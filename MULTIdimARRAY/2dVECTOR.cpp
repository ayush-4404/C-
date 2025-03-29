#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    vector <vector<int>> A(n,vector<int>(m)); 

    // 3*4 2d vector with alll elements 0-
    vector<vector<int>> B(3,vector<int>(4,0));


    vector<int> v1={1,2,3};
    vector<int> v2={4,5,6};
    vector<int> v3={7,8,9};
    vector <vector<int>> V={v1,v2,v3};
    return 0;
}