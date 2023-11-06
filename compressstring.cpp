#include <iostream>
#include <cstring>
using namespace std;
void compressstring(char str[],int n){
    int count=1;
    int nextind=0;
    for(int i=1;i<=n;i++){
        if(str[i-1]==str[i]){
            count++;
        }
        else{
            str[nextind]=str[i-1];
            nextind++;
            if(count>1){
                str[nextind]=count +'0';
                nextind++;
            }
            count=1;
        }
    }
    str[nextind]='\0';
}
int main() {
    char str[100];
    cin>>str;
    int n=strlen(str);
    compressstring(str,n);
    cout<<str;
}
