#include <iostream>
using namespace std;
int checkarrayrotation(int arr[],int n){
    int start=0,end=n-1;
    while(start<end) {
        int mid = (start + end) / 2;
        if(arr[mid]>arr[end]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return start;
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
        cout<<checkarrayrotation(arr, m);
    }
}
