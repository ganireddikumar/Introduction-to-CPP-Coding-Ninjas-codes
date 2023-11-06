#include <iostream>
using namespace std;
int main() {
    int n,rem,div=0,quo=1;
    cin>>n;
    while(n>0){
        rem = n%2;
        div+=rem*quo;
        quo *=10;
        n /= 2;
    }
    cout<<div;
}
