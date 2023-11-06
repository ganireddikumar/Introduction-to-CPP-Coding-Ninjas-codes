#include <iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int m,int n){
    int arr3[100];
    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j]){
                arr3[k]= arr1[i];
                k++;
            }
        }
    }
    for(int t=0;t<k;t++){
        cout<<arr3[t]<<endl;
    }

}

int main() {
    int arr1[100],arr2[100];
    int m,n;
    cin>>m;

    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        arr1[i]=t;
    }

    cin>>n;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr2[i]=t;
    }
    intersection(arr1,arr2,m,n);
}
