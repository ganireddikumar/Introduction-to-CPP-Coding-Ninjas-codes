#include <iostream>
using namespace std;
void swap(int arr[],int m,int t){
    int temp=arr[m];
    arr[m]=arr[t];
    arr[t]=temp;
}
void sort012(int arr[],int n){
    for(int i=0;i<n-1;i++) {
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
        }
        swap(arr,minidx,i);
    }

}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
