#include <iostream>
using namespace std;
void tripletsum(int arr[],int size,int sum){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int t=j+1;t<size;t++){
                if(arr[i]+arr[j]+arr[t]==sum){
                    cout << arr[i] << " " << arr[j] << " " << arr[t]<< endl;
                }
            }
        }
    }
}
int main() {
    int size,sum,arr[size];
    cin>>size;
    for(int i=0;i<size;i++){
        int p;
        cin>>p;
        arr[i]=p;
    }
    cin>>sum;
    tripletsum(arr,size,sum);
}