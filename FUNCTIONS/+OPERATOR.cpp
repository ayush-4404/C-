#include<iostream>
//#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1="THIS WILL ";
    string str2="BE REVERSED";
    cout<<str1<<endl;
    //str1+str2;
    cout<<str1+str2;
    cout<<endl<<str1<<endl;
    str1+=str2;
    cout<<str1;
    

    return 0;

}