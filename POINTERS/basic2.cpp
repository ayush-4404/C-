#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    int *ptrx=&x;
    int *ptry=&y;

    int z;
    int *ptr_res=&z;
    *ptr_res=*ptrx+*ptry;
    cout<<endl<<z<<endl;

    cout<<ptrx<<endl<<&ptrx;
    return EXIT_SUCCESS;
}