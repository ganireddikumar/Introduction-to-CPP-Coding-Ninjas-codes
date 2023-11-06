#include <iostream>
using namespace std;
void checkunq(int arr[],int size){

    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
           if(arr[i]==arr[j]){
               count++;
           }
        }
        if(count==1){
            cout<<arr[i];
        }
    }
}
int main() {
    int size,arr[size];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    checkunq(arr,size);
}
