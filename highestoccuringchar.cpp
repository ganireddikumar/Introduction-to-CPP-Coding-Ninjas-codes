#include <iostream>
#include <cstring>
#include <climits>
#define ASCII_SIZE 256
using namespace std;
char highestoccuringchar(char str[],int n){
    char result;
    int freq[256]={0},max=INT_MIN;
    for(int i=0;i<n;i++){
        freq[str[i]]++;
    }
    for(int i=0;i<n;i++){
        if(max<freq[str[i]]){
            max=freq[str[i]];
            result=str[i];
        }
    }
    return result;
}
int main() {
    char str[100];
    cin>>str;
    int n=strlen(str);
    cout<<highestoccuringchar(str,n);

}
