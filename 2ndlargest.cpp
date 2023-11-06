#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    int high=INT_MIN,secondhigh=INT_MIN;
    for(int i=1;i<=n;i++){
        int t;
        cin>>t;

        if(t>high){
           secondhigh=high;
           high=t;
        }
        else if(t>secondhigh && t!=high){
            secondhigh=t;
        }
    }
    cout<<secondhigh;
}
