#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="AYUSH m";
    s.pop_back();
    cout<<s;
    char ch='M';
    s.push_back(ch);
    cout<<s;

    
    return 0;

}