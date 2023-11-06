#include <iostream>
using namespace std;
void swap(int arr[],int m,int n){
    int temp=arr[m];
    arr[m]=arr[n];
    arr[n]=temp;
}
void pushzeros(int arr[],int n){
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0) {
            swap(arr,k,i);
            k++;
        }
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pushzeros(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
