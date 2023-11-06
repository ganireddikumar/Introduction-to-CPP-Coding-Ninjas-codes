#include <iostream>
using namespace std;
void insertionsort(int arr[], int n){
    for(int i=1;i<n;i++) {
        int current=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>current){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=current;
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
        insertionsort(arr, m);
        for (int t = 0; t < m; t++) {
            cout << arr[t] << " ";
        }
        cout << endl;
    }
    return 0;
}
