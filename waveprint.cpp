#include <iostream>
using namespace std;
void waveprint(int arr[100][100],int row,int col){
    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int k=0;k<row;k++){
                cout<<arr[k][j]<<" ";
            }
        }

        else if(j%2!=0){
            for(int k=row-1;k>=0;k--){
                cout<<arr[k][j]<<" ";
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int row,col;
        cin>>row>>col;
        int arr[100][100];
        for(int j=0;j<row;j++){
            for(int k=0;k<col;k++){
                cin>>arr[j][k];
            }
        }
        waveprint(arr,row,col);
    }
}
