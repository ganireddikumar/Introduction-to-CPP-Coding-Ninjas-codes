#include <iostream>
using namespace std;
int main() {
    int n,t;
    cin>>n;
    cin>>t;
    if(t==1){
        int u=0;
        for(int i =1;i<=n;i++){
            u+=i;
        }
        cout<<u;
    }
    else if(t==2){
        int u=1;
        for(int i =1;i<=n;i++){
            u*=i;
        }
        cout<<u;
    }
    else{
        cout<< -1;
    }
}
