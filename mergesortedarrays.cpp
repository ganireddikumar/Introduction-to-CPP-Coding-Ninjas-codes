#include <iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void mergesortedarrays(int arr1[],int arr2[],int ans[],int size1,int size2){
    int i=0,j=0,k=0;
    while(i<size1&&j<size2){
        if(arr2[j]==arr1[i]){
            ans[k]=arr2[i];
            ans[k+1]=arr2[i];
            k+=2;
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            i++;
            k++;
        }
        else {
            ans[k]=arr2[j];
            j++;
            k++;
        }
        }

    while(i<size1){
        ans[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2){
        ans[k]=arr2[j];
        j++;
        k++;
    }
    print(ans,size1+size2);
}
int main() {
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m],ans[m+n];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    mergesortedarrays(arr1,arr2,ans,n,m);
}
