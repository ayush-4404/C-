#include <iostream>
#include <string>
#include<cstring>
#include <algorithm>
using namespace std;
int main(){
    int num=459;
    string str=to_string(num);
    cout<<str<<endl;
    str.push_back('1');
    cout<<str<<endl;
    str+="98";
    cout<<str;
    return 0;

}