#include <iostream>
using namespace std;
bool checkfibbo(int n){
    int t1=0,t2=1,t3;
    while(t1<=n){
        t3= t1+t2;
        t1=t2;
        t2=t3;
        if(t1==n){
            cout<<"true";
            return 0;
        }
    }
    cout<<"false";
}
int main() {
    int n;
    cin>>n;
    checkfibbo(n);
}
