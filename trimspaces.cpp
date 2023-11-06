#include <iostream>
#include <cstring>
using namespace std;
void trimspaces(char str[1000]){
    int n= strlen(str);
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            for(int j=i;j<n-1;j++){
                str[j]=str[j+1];
            }
            count++;
        }
    }
    str[n-count]='\0';
}
int main() {
    char str[1000];
    cin.getline(str,1000);
    trimspaces(str);
    cout<<str;
}
