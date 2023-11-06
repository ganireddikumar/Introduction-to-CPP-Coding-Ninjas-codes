#include <iostream>
using namespace std;
void spiralprint(int arr[100][100],int row,int col){
    int i,j=0,k=0;
    while(j<row && k<col){
        for(i=k;i<col;i++){
            cout<<arr[j][i]<<" ";
        }
        j++;

        for(i=j;i<row;i++){
            cout<<arr[i][col-1]<<" ";
        }
        col--;

        if(k<col){
            for(i=col-1;i>=k;i--){
                cout<<arr[row-1][i]<<" ";
            }
            row--;
        }

        if(j<row){
            for(i=row-1;i>=j;i--){
                cout<<arr[i][k]<<" ";
            }
            k++;
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
        spiralprint(arr,row,col);
    }
}