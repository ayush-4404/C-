#include<iostream>
#include<vector>
using namespace std;
void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
void sortZerosAndOne(vector<int> &v){
    int lt_ptr=0;
    int rt_ptr=v.size()-1;

    while(lt_ptr<rt_ptr){
        if(v[lt_ptr]==1&&v[rt_ptr]==0){
            v[lt_ptr]=0;
            v[rt_ptr]=1;
            //swap(&v[lt_ptr],&v[rt_ptr]);
            lt_ptr++;
            rt_ptr--;
        }
        if(v[lt_ptr]==0){
            lt_ptr++;
        }
        if(v[rt_ptr]==1){
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
    cin>>n;

    vector<int> v;
    cout<<"enter elements: ";
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    display(v);
    cout<<endl;
    sortZerosAndOne(v);
    display(v);
    return 0;
}