#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int val = n-i;
        for(int j=n;j>i;j--){
            cout<<val;
        }
        cout<<endl;
    }
}
