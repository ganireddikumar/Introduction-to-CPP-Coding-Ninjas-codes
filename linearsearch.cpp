#include <iostream>
using namespace std;
void linearsearch(int arr[],int size,int element){
    int success=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            success=i;
        }
    }
    cout<<success;
}
int main() {
    int size,element,arr[size];
    cin>>size;

    for(int i=0;i<size;i++){
        int t;
        cin>>t;
        arr[i]=t;
    }
    cin>>element;
    linearsearch(arr,size,element);
}
