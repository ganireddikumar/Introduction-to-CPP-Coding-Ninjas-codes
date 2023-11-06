#include <iostream>
using namespace std;
void arrangenum(int n){
    int arr[n],count=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            arr[count]=i;
            count++;
        }
    }
    for(int i=n;i>=1;i--){
        if(i%2==0){
            arr[count]=i;
            count++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    arrangenum(n);
}
