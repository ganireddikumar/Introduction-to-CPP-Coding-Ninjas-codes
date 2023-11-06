#include <iostream>
#include <climits>
using namespace std;
int secondlarge(int arr[],int n){
    int seclar =INT_MIN;
    int large=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            seclar=large;
            large=arr[i];
        }
        else if (arr[i] > seclar && arr[i] != large) {
            seclar = arr[i];
        }
    }
    return seclar;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<secondlarge(arr,n);
}
