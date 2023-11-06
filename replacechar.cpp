#include <iostream>
#include <cstring>
using namespace std;
int len(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}
void replacechar(char str[],char a,char b){
    int n=len(str);
    for(int i=0;i<n;i++){
        if(str[i]==a){
            str[i]=b;
        }
    }
}

int main() {
    char str[100],a,b;
    cin>>str;
    cin>>a>>b;
    replacechar(str,a,b);
    cout<<str;
}
