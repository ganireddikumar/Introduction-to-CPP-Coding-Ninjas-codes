#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=0;
    for(int count=1;count<=n;count++){
        if(count%2==0){
            sum=sum+count;
        }
    }
    cout<<sum;
}

