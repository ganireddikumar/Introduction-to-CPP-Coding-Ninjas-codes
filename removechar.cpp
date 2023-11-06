#include <iostream>
#include <cstring>
using namespace std;
void removechar(char str[100],char a){
    int n=strlen(str);
    int t=0;
    for(int i=0;i<n;i++){
        if(str[i]!=a){
            str[t]=str[i];
            t++;
        }
    }
    str[t]='\0';
}
int main() {
    char str[100],a;
    cin>>str>>a;
    removechar(str,a);
    cout<<str;
}
