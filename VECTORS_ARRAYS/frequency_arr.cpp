#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    // preprocessing

    const int N=1e5;
    vector<int> freq(N,0); // initialised from 0
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }


    int q;
    cout<<"enter no.of query";
    cin>>q;
    for(int i=0;i<q;i++){
        int qe;
        cin>>qe;
        if(freq[qe]==0) cout<<qe<<" is not present"<<endl;
        else
        cout<<qe<<" is present "<<freq[qe]<<" times"<<endl;
    }
    return 0;
}



//
 
