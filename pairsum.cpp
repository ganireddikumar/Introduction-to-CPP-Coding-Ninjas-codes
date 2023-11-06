#include <iostream>
using namespace std;
void pairsum(int arr[],int size,int sum){
    for(int i=0;i<size;i++){
        for(int j=size-1;j>=i;j--){
            if(arr[i]+arr[j]==sum){
                if(arr[i]<arr[j]) {
                    cout << arr[i] << " " << arr[j] << endl;
                }
                else if(arr[j]<arr[i]) {
                    cout << arr[j] << " " << arr[i] << endl;
                }
                else{
                    cout << arr[i] << " " << arr[j] << endl;
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
    pairsum(arr,size,sum);
}
