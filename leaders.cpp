#include <iostream>
using namespace std;
void leaders(int n,int arr[]){
    int count=1,secarr[n];
    int leader=arr[n-1];
    secarr[0]=leader;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>leader){
            leader=arr[i];
            secarr[count]=leader;
            count++;
        }
    }
    for(int i=count-1;i>=0;i--){
        cout<<secarr[i]<<" ";
    }

}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leaders(n,arr);

}
