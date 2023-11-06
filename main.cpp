#include <iostream>
#include <cstring>
using namespace std;
void reverse(char str[],int start,int end){
    while(start<end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
void reversewordwise(char str[],int n){
    int start=0;
    for(int end=0;end<n+1;end++){
        if(str[end]==' '||str[end]=='\0'){
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    reverse(str,0,n-1);
}

int main() {
    char str[1000];
    cin.getline(str,1000);
    strlen(str);
    reversewordwise(str,strlen(str));
    cout<<str;
}
