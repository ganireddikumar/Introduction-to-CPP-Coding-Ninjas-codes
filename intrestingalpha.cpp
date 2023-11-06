#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int val;
    for(int i=0;i<=n;i++){
        val=n-i;
        for(int j=0;j<=i;j++){
            char p='A'+val;
            cout<<p;
            val++;
        }
        cout<<endl;
    }
}
