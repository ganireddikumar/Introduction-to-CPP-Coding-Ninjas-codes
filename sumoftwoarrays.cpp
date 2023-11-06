#include <iostream>
using namespace std;
int maximum(int int1,int int2){
    int max=int1;
    if(int2>int1){
        max=int2;
    }
    return max;
}
void sumofarr(int result[],int maxim,int arr1[],int size1,int arr2[],int size2){
    int carry =0;
    for(int i=0;i<maxim;i++){
        int sum=carry;
        if(i<size1){
            sum+=arr1[size1-i-1];
        }
        if(i<size2){
            sum+=arr2[size2-i-1];
        }
        carry=sum/10;
        result[maxim-i-1]=sum%10;
    }
}

int main() {
    int p;
    cin>>p;
    for(int q=0;q<p;q++) {
        int n, m;
        cin >> n;
        int arr1[n];
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        cin >> m;
        int arr2[m];
        for (int i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        int maxsize = maximum(n, m) + 1;
        int result[maxsize];
        sumofarr(result, maxsize, arr1, n, arr2, m);
        int j=0;
        if(result[j]==0){
            j=1;
        }
        for (int i = j; i < maxsize; i++) {
            cout << result[i];
        }

    }
}
