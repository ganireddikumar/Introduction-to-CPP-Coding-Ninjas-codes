#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
int length(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}
bool checkpalindrome(char str[]){
    int start=0,end=length(str)-1;
    while(start<=end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char str[1000];
    cin>>str;
    if(checkpalindrome(str)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
