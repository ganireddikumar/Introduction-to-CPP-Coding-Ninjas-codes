#include <iostream>
using namespace std;
void checkdup(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=size-1;j<=i;j--){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                break;
            }
        }
    }
}
int main() {
    int size,arr[size];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    checkdup(arr,size);
}
