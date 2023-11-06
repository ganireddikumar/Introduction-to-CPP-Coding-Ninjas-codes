#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for(int i=1;i<=N;i++){

        for(int sp=1; sp <=N-i;sp++){
            cout<<" ";
        }
        for(int j=1; j <= ((i*2) -1) ; j++){
            cout<<'*';
        }
        /*for(int j=1;j<=i;j++){
            cout<<val;
            val++;
        }*/
        cout<<endl;
    }
}