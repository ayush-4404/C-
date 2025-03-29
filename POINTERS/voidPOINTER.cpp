#include<iostream>
using namespace std;
int main(){
    float f=9.4;
    int x=10;
    void *ptr=&f;
    cout<<ptr<<" ";
    float *p1=(float*)ptr;
    cout<<*p1<<endl;
    ptr=&x;
    cout<<ptr<<" ";
    int *p2=(int*)ptr;
    cout<<*p2;
    return 0;
}