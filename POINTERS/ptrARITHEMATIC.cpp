#include<iostream>
using namespace std;
int main(){
    double x=20.2;
    cout<<sizeof(x)<<endl;
    double *ptr=&x;
    cout<<ptr<<endl<<(ptr+3)<<" "<<ptr-1;

    return 0;
}