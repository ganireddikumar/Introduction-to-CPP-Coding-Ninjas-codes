#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int val;
    for(int i=0;i<n;i++){
        val =i;
        for(int j=0;j<=i;j++){
            char t ='A'+val;
            cout<<t;
            val++;
        }
        cout<<endl;
    }
}