#include <iostream>
using namespace std;
int main() {
    int n,i=1,count=0;
    cin>>n;
    while(count<n){
        int j=(3*(i)+2);
        if(j%4!=0){
            cout<<j<<" ";
            count++;
        }
        i++;
    }
}
