#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(1); 
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.resize(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.resize(121);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.pop_back();
    v.pop_back();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    cout<<endl;
    v.insert(v.begin(),5);
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    v.insert(v.begin()+1,3,5);// inserts 3 5's 
    for(auto it:v){
        cout<<it<<" ";
    }
    
    return 0;
}






























