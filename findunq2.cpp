#include <iostream>
using namespace std;
void findunq(int arr[], int size) {
    int result = arr[0];
    for (int i = 1; i < size; i++) {
        result ^= arr[i];
    }
    cout<<result;
}
int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    findunq(arr, size);
}
