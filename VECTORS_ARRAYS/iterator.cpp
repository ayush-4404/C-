#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(10,0);
    //iterator points to memory location 
    //also v.end() points to location just after last element
    //v.rend points to element just before 1st element
    //v.rbegin points to last element in the vector
    // vector<int>::iterator it=v.begin();
    // it++;
    // cout<<*(it)<<" "<<endl;

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}