#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int sp=1;sp<=n-i;sp++){
            cout<<" ";
        }
        int val=i;
        for(int j=1;j<=i;j++){
            cout<<val;
            val++;
        }
        val--;
        for(int k=1;k<i;k++){
            val--;
            cout<<val;
        }
        cout<<endl;
    }
}