#include <iostream>
using namespace std;
void swapaltr(int arr[],int n){
    int t;
    for(int i=0;i<n;i+=2){
        if(n%2!=0) {
            t = arr[n-1];
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

        }
        else{
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    arr[n-1]=t;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n,arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapaltr(arr,n);
    return 0;
}
