#include <iostream>
#include <cstring>
void removeconsecduplicates(char str[],int n){
    int count=1;
    for(int i=1;i<n;i++){
        if(str[i-1]!=str[i]){
            str[count]=str[i];
            count++;
        }
    }
    str[count]='\0';

}
using namespace std;
int main() {
    char str[100];
    cin>>str;
    int n=strlen(str);
    removeconsecduplicates(str,n);
    cout<<str;
}
