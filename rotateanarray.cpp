#include <iostream>
using namespace std;
void rotate(int arr[],int size,int r){
    r=r%size;
    for(int i=0;i<r;i++){
        int temp=arr[0];
        for(int j=0;j<size-1;j++){
            arr[j]=arr[j+1];
        }
        arr[size-1]=temp;
    }
}
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int arr[m];
        for(int j=0;j<m;j++){
            cin>>arr[j];
        }
        int r;
        cin>>r;
        rotate(arr,m,r);
        for(int j=0;j<m;j++){
            cout<<arr[j]<<" ";
        }
    }
}
