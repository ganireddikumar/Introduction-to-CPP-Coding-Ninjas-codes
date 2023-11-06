#include <iostream>
#include <cstring>
using namespace std;
void printsubstring(char str[],int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            for(int i=start;i<=end;i++){
                cout<<str[i];
            }
            cout<<endl;
        }
    }
}
int main() {
    char str[1000];
    cin.getline(str,1000);
    printsubstring(str,strlen(str));
}
