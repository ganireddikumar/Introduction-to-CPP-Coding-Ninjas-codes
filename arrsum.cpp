#include <iostream>
using namespace std;
int main() {
    int n,arr[n],arrsum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arrsum+=arr[i];
    }
    cout<<arrsum;
}
