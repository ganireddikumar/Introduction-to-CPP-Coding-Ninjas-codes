#include <iostream>
using namespace std;
int main() {
    int n,i,t;
    cin>>n;
    while(n>0){
        i=n%10;
        t = t*10 + i;
        n/=10;
    }
    cout<<t;
}
