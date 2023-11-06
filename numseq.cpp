#include <iostream>
using namespace std;
int main() {
    int n,n1,n2,count=1;
    cin >> n;
    cin >> n1;
    bool decreasing=true;
    while(count<n){
        cin >> n2;
        if(n1==n2){
            cout<<"false";
            return 0;
        }
        if(n2<n1){
            if(!decreasing){
                cout<<"false";
                return 0;
            }
        }
        else{
            if(decreasing){
            decreasing= false;
        }
        }
        count++;
        n1=n2;
    }
    cout<<"True";
}