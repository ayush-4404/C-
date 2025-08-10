#include<iostream>
using namespace std;
int sum_in_range(int x, int y){
    int result =0;
    for(int i=x;i<=y;i++){
        result+=i;
    }
    return result;
}
// int sum_in_range_optimised(int x, int y){vb 
//     int n=y-x+1;
//     int result=(n*(2*x+(n-1)))/2;
//     return result;
// }
int main(){
    int x,y;
    //cin>>x>>y;
    cout<<"sum of numbers between them ="<<sum_in_range(2,10000);
    return 0;
}