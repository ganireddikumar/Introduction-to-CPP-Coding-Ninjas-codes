#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n%2 != 0){
        //upper
        for(int i=0;i< (n+1)/2 ;i++){
            for(int a=n; a>i ;a--){
                cout<<' ';
            }
            for(int b=0;b< i ;b++){
                cout<<'*';
            }
            for(int c=0;c <= i ;c++){
                cout<<'*';
            }
            cout<<endl;
        }

        //lower
        for(int i=((n+1)/2)-1;i>0 ;i--){
            for(int a=n; a>i-1 ;a--){
                cout<<' ';
            }

            for(int c=0;c < i-1 ;c++){
                cout<<'*';
            }
            for(int b=0;b <= i-1 ;b++){
                cout<<'*';
            }
            cout<<endl;
        }
    }
}
