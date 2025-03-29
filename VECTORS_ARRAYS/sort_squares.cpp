#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortSquares(vector<int> &v, vector<int> &ans){
    int lt_ptr=0;
    int rt_ptr=v.size()-1;

    while(lt_ptr<=rt_ptr){
        if(abs(v[lt_ptr])>abs(v[rt_ptr])){
            ans.push_back(v[lt_ptr]*v[lt_ptr]);
            lt_ptr++;
        }
        else{
            ans.push_back(v[rt_ptr]*v[rt_ptr]);
            rt_ptr--;
        }
    }
    return;
}
// it is a good practice to pass vectors by reference, extra memeory is not created
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter no. of elements";
    cin>>n;

    vector<int> v;
    vector<int> a;
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    display(v);
    cout<<endl;
    sortSquares(v,a);
    reverse(a.begin(), a.end());
    display(a);
    return 0;
}