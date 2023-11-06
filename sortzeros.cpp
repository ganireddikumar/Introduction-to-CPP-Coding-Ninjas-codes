#include <iostream>
using namespace std;
void sortzeros(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            cout<<0<<" ";
        }
    }
    for(int i=size-1;i>=0;i--){
        if(arr[i]==1){
            cout<<1<<" ";
        }
    }
}
int main() {
    int size,arr[size];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sortzeros(arr,size);
}
