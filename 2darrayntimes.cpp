#include <iostream>
using namespace std;
void arrayntimes(int arr[][100],int row,int col){
    for(int i=0;i<row;i++){
        for(int k=0;k<row-i;k++) {
            for (int j = 0; j < col; j++) {
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
}
int main() {
    int arr[100][100],row,col;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    arrayntimes(arr,row,col);
}
