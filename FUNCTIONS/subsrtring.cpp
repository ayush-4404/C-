#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="THIS WILL BE REVERSED";
    string p=str.substr(5,4);
    cout<<p<<endl;
    string q=str.substr(5);
    cout<<q<<endl;
    return 0;

}