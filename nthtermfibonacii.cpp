#include <iostream>
using namespace std;
int main() {
    int n,p=0,q=1;
    cin>>n;
    for(int i=0;i<n;i++){
        int r =p+q;
        p=q;
        q=r;
    }
    cout<<p;
}
