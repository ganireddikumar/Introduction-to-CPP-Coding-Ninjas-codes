#include <iostream>
#include <climits>
using namespace std;
void checksum(int row,int col,int arr[][100]){
    int rowsum=0,colsum=0,rowtemp=INT_MIN,coltemp=0;
    int rowindex=0,colindex=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            rowsum+=arr[i][j];
        }
        if(rowsum>rowtemp){
            rowtemp=rowsum;
            rowindex=i;
        }
        rowsum=0;
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            colsum+=arr[j][i];
        }
        if(colsum>coltemp){
            coltemp=colsum;
            colindex=i;
        }
        colsum=0;
    }
    if(coltemp>rowtemp){
        cout<<"column"<<" "<<colindex<<" "<<coltemp;
    }
    else if(coltemp<rowtemp || coltemp==rowtemp){
        cout<<"row"<<" "<<rowindex<<" "<<rowtemp;
    }
    else{
        cout<<"row"<<" "<<0<<" "<<rowtemp;
    }
}
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int row, col;
        cin >> row >> col;
        int arr[100][100];
        for(int j=0;j<row;j++) {
            for (int k = 0; k < col; k++) {
                cin >> arr[j][k];
            }
        }
        checksum(row,col,arr);
        cout<<endl;
    }
}
