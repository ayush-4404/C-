#include<iostream>
using namespace std;
int main(){
    int *ptr=NULL;
    int *p=0;
    int *p2='\0';
    cout<<ptr<<" "<<p<<" "<<p2<<endl;
    //cout<<*ptr<<" "<<*p; //this will give segmentation fault on some compiler
    return 0;
}