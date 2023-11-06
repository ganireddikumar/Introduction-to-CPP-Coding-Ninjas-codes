#include <iostream>

using namespace std;
void swap(int arr[],int a1,int a2){
    int temp=arr[a1];
    arr[a1]=arr[a2];
    arr[a2]=temp;
}
void selectionsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr, minIdx, i);
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
        selectionsort(arr, m);
        for (int t = 0; t < m; t++) {
            cout << arr[t] << " ";
        }
        cout << endl;
    }
    return 0;
}
