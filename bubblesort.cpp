#include <iostream>

using namespace std;
void swap(int arr[],int a1,int a2){
    int temp=arr[a1];
    arr[a1]=arr[a2];
    arr[a2]=temp;
}
void bubblesort(int arr[], int n) {
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
            }
        }
    }

}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        int arr[m];
        for (int t = 0; t < m; t++) {
            cin >> arr[t];
        }
        bubblesort(arr, m);
        for (int t = 0; t < m; t++) {
            cout << arr[t] << " ";
        }
        cout << endl;
    }
    return 0;
}
