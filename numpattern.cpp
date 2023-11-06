#include<iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    int val = 1;
    for(int i=1;i<=N;i++){
        val = i;
        for(int sp=1; sp <=N-i;sp++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<val;
            val++;
        }
        cout<<endl;
    }
}