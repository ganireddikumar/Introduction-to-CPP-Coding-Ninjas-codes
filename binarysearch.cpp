#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int find){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]<find){
            start=mid+1;
        }
        else if(arr[mid]>find){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main() {
    int n,arr[n],find;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>find;
    cout<< binarysearch(arr,n,find);
}
