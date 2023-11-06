#include <iostream>
using namespace std;
int main(){
    int n,rem,div=0,quo=1;
    cin>>n;
    while(n>0){
        rem= n%10;
        div += rem*quo;
        quo *=2;
        n/=10;
    }
    cout<<div;
}