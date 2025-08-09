//inside main the max size of array that one can declare is of 10^6
//it'll throw segmentation fault
// globally it will go up to 10^7 for int

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;     // only lower case
    cin>>s;
    int hash[26]={0};
    for(auto it=0;it<s.size();it++){
        hash[s[it]-97]++;
    }
    char ch;
    cin>>ch;
    cout<<hash[ch-97];
    return 0;
}