#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){

        for(int sp=n-i;sp>=1;sp--){
            cout<<" ";
        }
        for(int j=1;j <=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
