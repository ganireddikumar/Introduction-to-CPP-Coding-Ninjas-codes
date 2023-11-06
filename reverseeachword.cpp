#include <iostream>
#include <cstring>
using namespace std;
void reverseeachword(char str[],int n){
    int start=0;
    for(int i=0;i<n;i++){
        if(str[i]==' '||str[i+1]=='\0'){
            int end=i-1;
            while(end>start){
                int temp=str[start];
                str[start]=str[end];
                str[end]=temp;
                start++;
                end--;
            }
            start=i+1;
        }
    }
}

int main() {
    char str[100];
    cin.getline(str,100);
    int n=strlen(str);
    reverseeachword(str,n);
    cout<<str;
}
