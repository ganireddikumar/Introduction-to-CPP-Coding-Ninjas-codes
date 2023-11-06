#include <iostream>
using namespace std;
int main() {
    int arr[100][100],r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<r;i++){
        int colsum=0;
        for(int j=0;j<c;j++){
            colsum+=arr[j][i];
        }
        cout<<colsum<<" ";
    }
}
